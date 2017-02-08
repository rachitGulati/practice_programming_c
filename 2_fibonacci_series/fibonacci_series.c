/*
Fibonacci Series
Started on: 9th, feb, 2017
Output:
Enter the number of elements in sequence: 15
0 1 1 2 3 5 8 13 21 34 55 89 144 233 377
*/
#include <stdio.h>
int main() {
	int count, next, prev, temp;
	printf("Enter the number of elements in sequence: ");
	scanf("%d", &count);
	if (count == 1) {
		printf("0\n");
		return 0;
	}
	else if (count == 2) {
		printf("0 1 \n");
	}
	else {
		prev = 0;
		next = 1;
		while (count > 0) {
			printf("%d ",prev);
			temp = next;
			next = prev + next;
			prev = temp;
			count -=1;
		}
		printf("\n");
	}	
return 0;
}
