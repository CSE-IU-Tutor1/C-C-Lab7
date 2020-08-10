/*
2. Remove duplicate elements from an array and return the new length.
Do not create any temporary array
Ex:
 _________________________________________
| Input: [ab, ac, ab, bc]                 |
| Output: 3                               |
|_________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ex2(char *str[],int n){
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
	
	ex2(testcase,n);
		
	return 0;
}
