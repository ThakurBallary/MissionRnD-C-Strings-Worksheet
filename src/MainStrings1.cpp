/*

Use MainStrings1 File for testing any other function in other Cpp files of the Strings Project.

DO NOT write main function in any other File or else your Build Fails.

Objectives of Strings-1 Lesson:

->Basics of Strings / Char Arrays .
->Learn about 2D Strings
->Convert Numbers/Floats into Strings
->Manipulating Strings

*/
#include <stdio.h>
#include "FunctionHeadersStrings1.h"

int main(){

	//NumbertoStr
	/*
	float number = -1.012;	
	char str[10];
	number_to_str(number, str, 2);
	printf("%s\n", str);
	*/

	//KthIndexFromEnd 
	/*
	char ch = KthIndexFromEnd("computer", 0);
	printf("%c\n", ch);	
	*/

	//StrWordsinRev
	/*
	char input[100] = "missionrnd is great";
	int len = 19;
	str_words_in_rev(input, len);
	for (int i = 0; i < len; i++) {
		printf("%c", input[i]);
	}
	*/

	//removeSpaces	
	/*
	char str[] = "co d  e";
	removeSpaces(str);
	*/

	//commonWords
	char *str1 = "";
	char *str2 = "";
	char **res = commonWords(str1, str2);
	for (int i = 0; res[i] != NULL; i++) {
		printf("%s\n", res[i]);
	}
	

	return 0;
}