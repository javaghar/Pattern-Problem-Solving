// C program to print Pascal’s Triangle 
// using combinations in O(n^2) time 
// and O(1) extra space function 

/*  1 
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1   */

#include <stdio.h> 
void printPascal(int f) 
{ 
	for (int n= 1; n <= f; n++) { 
		for (int space = 1; space <= f - n; space++) 
			printf(" "); 
		// used to represent C(line, i) 
		int coef = 1; 
		for (int r = 1; r <= n; r++) { 
			// The first value in a line 
			// is always 1 
			printf("%d ", coef); 
			coef = coef * (n - r) / r; 
		} 
		printf("\n"); 
	} 
} 

// Driver code 
int main() 
{ 
	int f = 5; 
	printPascal(f); 
	return 0; 
}
