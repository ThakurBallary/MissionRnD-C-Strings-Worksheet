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
	char input[14] = "coding is fun";
	int len = 14;
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
	

	return 0;
}