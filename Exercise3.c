/*
3. Input 2 complex numbers using string then return a string
that represent the product of those two. Result should use string.
Complex number has the form of a+bi (i2 = -1, b can be negative or positive)
Ex:
 __________________________________________________________
| Input: 3+2i 3+2i                                         |
| Output: 5+12i                                            |
|__________________________________________________________|
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 1000

int ex3(char s1[], char s2[]){
	//your codes here
}

int main(int argc, char *argv[]) {
	char n1[SIZE], n2[SIZE];
    strcpy(n1, argv[1]);
    strcpy(n2, argv[2]);
    ex3(n1,n2);
		
	return 0;
}
