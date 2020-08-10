/*
1. Given an array of string, find the longest common prefix of all element.
 ________________________________________________
| Input: abc abd abf                             |
| Output: ab                                     |
|________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ex1(char *str[],int n){
	//your codes here
}

int main(int argc, char *argv[]) {
	int n = argc-1;
	int i;
	char *testcase[n];
	for(i = 0; i < n; i++)
    {
        strcpy(testcase[i], argv[i+1]);
    }
	
	ex1(testcase,n);
		
	return 0;
}
