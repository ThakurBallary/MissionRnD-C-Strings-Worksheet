/*
OVERVIEW: Given a float number ,Convert it into a string 

INPUTS: A Float,Final string ,How many digits after decimal has to be displayed .
Its zero for integers.

OUTPUT: No need to output anything ,Modify the str in function parameter such that it
now holds the string format of the float number specified

Example : number_to_str(345,str,0);
Should copy "345\0" in the str;
number_to_str(345.342,str,2);
Should copy "345.34" in the str;

NOTES: Don't create new string.

*/

#include <stdio.h>

int isNegativeNumber(int num, char *str){
	int i = 0;
	if (num < 0) {
		str[i] = '-';
		i++;
	}
	return i;
}

void reverseString(char *str, int startIndex, int len) {
	int i = startIndex;
	int j = len - 1, temp;
	while (i<j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++; j--;
	}
}

int intToString(int n, char *str, int i) {
	int startIndex = i;
	while (n > 0) {
		str[i] = n % 10 + '0';
		i++;
		n /= 10;
	}
	reverseString(str, startIndex, i);
	return i;
}

void number_to_str(float number, char *str,int afterdecimal){
	int beforeDot = (int)number;
	float afterDot = number - beforeDot;
	int i = isNegativeNumber(beforeDot, str);
	if (i == 1) {
		str[0] = '-';
		beforeDot *= -1;
	}
	i = intToString(beforeDot, str, i); // returns len of the string
	if (afterdecimal != 0) {
		str[i] = '.';
		i++;
		if (afterDot < 0) {
			afterDot *= -1;
		}
		while (afterdecimal > 0) {
			int z = afterDot * 10;
			if (z == 0) { // 0.012 zero after decimal point
				str[i] = '0';
				i++;
			}				
			afterDot *= 10;
			afterdecimal--;
		}		
		i = intToString(afterDot, str, i);
	}
	str[i] = '\0';
}
