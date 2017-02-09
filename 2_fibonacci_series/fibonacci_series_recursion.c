/*
Fibonacci series with recursion
Started on: 9th, feb, 2017
Output:
Enter the number of elements in sequence: 15
0 1 1 2 3 5 8 13 21 34 55 89 144 233 377
*/
#include <stdio.h>
int fibonacci(int num){
	if (num == 0){return 0;}
	else if(num == 1){return 1;}
	else {return fibonacci(num-1)+ fibonacci(num-2);}
}
int main() {
	int count, i;
	printf("Enter the number of elements in sequence: ");
	scanf("%d", &count);
	for(i = 0; i < count; i++){
		printf("%d ", fibonacci(i));
	}
	printf("\n");
	return 0;

}
