/*
OVERVIEW: Given a string, remove all spaces in it.
E.g.: Input: "abd scd". Output: "abdscd"

INPUTS: A string.

OUTPUT: Return string after removing spaces.

ERROR CASES: Return '\0' for invalid inputs.

NOTES: Don't create new string.
*/

char removeSpaces(char *str) {
	if (str[0] == '\0') {
		return '\0';
	}
	int i, t = -1;
	for (i = 0; str[i] != '\0'; i++) {		
		if (str[i] == ' ') {
			if (t == -1) {
				t = i;
			}
		}
		else if(t != -1) {
			str[t] = str[i];
			t++;
		}
	}
	str[t] = '\0';
}