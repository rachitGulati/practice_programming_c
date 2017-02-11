/*
Pascal Triangle
Start Date: 11 Feb, 2017
To build the triangle, start with "1" at the top, then continue placing numbers below it in a triangular pattern.
Output:
Height of Pascal Triangle: 5
     1
    1 1
   1 2 1
  1 3 3 1
 1 4 6 4 1
*/
#include <stdio.h>
#include <stdlib.h>
int main() {
	
	int height;
	printf("Height of Pascal Triangle: ");
	scanf("%d", &height);
	int *pt[height]; //Array of pointers to point to the dynamic column of each pascal triangle row.
	for(int i = 1; i <= height; i++) {
		pt[i-1] = (int *)malloc(i* sizeof(int)); //Allocate memeory to each column dynamically
	}
	for(int i = 0; i < height; i++) { 
		pt[i][0] = 1; //First value in column is always 1
		for(int j = 1; j < i; j++) {
			pt[i][j] = pt[i-1][j-1] + pt[i-1][j]; //Compute value based on last row of triangle
		}
		pt[i][i] = 1; //Last value in column is always 1
	}
	for(int i = 0; i < height; i++) { 
		for(int k = height - i -1; k > 0; k--) printf(" "); //Space Loop 
		for(int j = 0; j <= i; j++) {
			if(i != height) printf(" "); //To manage a better view in console
			printf("%d",pt[i][j]);
		}
		printf("\n");
 }
	return 0;
}
