/*
OVERVIEW: Given a string, return the letter at Kth index from the end of the string.
E.g.: Input: "qwertyui", 3. Output: 't' (index starting from zero).

INPUTS: A string and value of K.

OUTPUT: Return the letter at Kth index from the end of the string (index starting from zero).

ERROR CASES: Return '\0' for invalid inputs.

NOTES:
*/

char KthIndexFromEnd(char *str, int K) {
	// invalid inputs
	if (str == '\0' || K < 0) {
		return '\0';
	}
	int i = 0;
	while (i <= K) {
		if (str[i] == '\0') {
			return '\0';    // K > string length
		}
		i++;
	}
	while (str[i] != '\0') {
		i++;
	}
	i = i - K - 1;
	if (i < 0) {
		return '\0';
	}
	return str[i];
}