/*
Fibonacci series with recursion
Started on: 10th, feb, 2017
Output:

Enter the element position in fibonacci series: 6
8
Do you want to continue (Y/N)?:  Y

Enter the element position in fibonacci series: 7
13
Do you want to continue (Y/N)?:  N
*/
#include  <stdio.h>
int fibonacci_dic[999] = {0,1};
int fibonacci(int num) {
	int result;
	if(num == 0 || (fibonacci_dic[num] != 0 && num !=0)) {
		return fibonacci_dic[num];
	}
	else {
		result = fibonacci(num-1)+ fibonacci(num-2);
		fibonacci_dic[num] = result;
		return result;
	}
}
int main() {
	int count, i;
	char answer;
	do {
		printf("\nEnter the element position in fibonacci series: ");
		scanf("%d", &count);
		printf("%d", fibonacci(count));
		printf("\nDo you want to continue (Y/N)?:  ");
		scanf("%s", &answer);
	}while(answer == 'Y');
return 0;

}
