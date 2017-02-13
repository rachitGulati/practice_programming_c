/*
Quick Sort
Start Date: 12 Feb, 2017
Complexity:
Worst-case: O(N2) Best-case O(NlogN) Average-case - O(NlogN)
Output:
Sorted Array for [3, 1, 5, 8, 0, 19, 30, 9, 25, 19}] is below:
0 1 3 5 8 9 19 19 25 30
*/


#include <stdio.h>
int partition(int* a, int p, int r){
	int i, j, x, temp;
	i = p - 1;
	x = a[r];
	for(j = p; j <=r-1; j++){
		if (a[j] <= x && (i != j)) { //i != j remove the self replacing conditions
			i = i + 1;
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
	}
	temp  = a[i+1]; //i+1 for the acutal pivot position
	a[i+1] = a[r];
	a[r] = temp;
  return i+1;
}

void quicksort(int* a, int p, int r){
	int q;
	if (p < r) {
		q = partition(a, p, r); //Get the pivot position
		quicksort(a, p, q-1);
		quicksort(a, q+1, r);
	}
}

int main() {
	int a[10] = {3, 1, 5, 8, 0, 19, 30, 9, 25, 19}, len = sizeof(a)/sizeof(a[0]);
	quicksort(&a[0], 0, len -1 );
	printf("Sorted Array for [3, 1, 5, 8, 0, 19, 30, 9, 25, 29}] is below:\n");
	for(int i = 0; i < len ; i++) {
		printf("%d ", a[i]);
	}

	printf("\n"); //Extra line for better output at console
	return 0; 
}
