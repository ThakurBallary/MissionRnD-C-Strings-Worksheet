/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/
#include <stdio.h>
#include <string.h>

void reverse(char *str, int i, int j) {
	while (i < j) {
		char temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
}

void str_words_in_rev(char *input, int len){
	int i = 0, j = 1, s = 0;
	while (j < len) {
		if (input[j] == ' '){
			if (s == 0) {
				reverse(input, i, j - 1);
				s = 1;
			}
		}
		if (s == 1 && input[j] != ' ') {
			i = j;
			s = 0;
		}
		j++;
	}
	reverse(input, i, len - 1); // last word
	reverse(input, 0, len - 1); // entire string
}
