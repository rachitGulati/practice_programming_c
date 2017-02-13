/*
Merge Sort
Start Date: 12 Feb,2017
Complexity: All cases O(nlogn)
Output: 
Array [8,1,3,2,0,2,19,40] after sorting is below:
0 1 2 2 3 8 19 40
*/

#include <stdio.h>

void merge(int arr[], int left, int mid, int right) {
	int i, j, k, n1 = mid -left + 1, n2 = right - mid, left_arr[n1], right_arr[n2];
	for(i = 0; i < n1; i++){
		left_arr[i] = arr[i + left];
	}
	for(j = 0; j < n2; j++){
		right_arr[j] = arr[j + mid + 1];
	}
	k = left;
	i = 0;
	j = 0;
	while(i < n1 && j < n2){
		if(left_arr[i] < right_arr[j]) {
			arr[k] = left_arr[i];
			i++;
		}
		else	{
			arr[k] = right_arr[j];
			j++;
		}
		k++;
	}
	while(i < n1) {
		arr[k] = left_arr[i];
		i++;
		k++;
	}
	while(j < n2) {
		arr[k] = right_arr[j];
		j++;
		k++;
	}
}
void mergesort(int arr[], int left, int right) {
	int mid;
	if(left < right) {
		mid = (left + right -1 ) / 2;
		mergesort(arr, left, mid);
		mergesort(arr, mid+1, right);
		merge(arr, left, mid, right);
		}
}

int main() {
	int arr[8] = {8,1,3,2,0,2,19,40}, len = sizeof(arr)/sizeof(arr[0]);
	mergesort(arr, 0, len - 1);
	printf("Array [8,1,3,2,0,2,19,40] after sorting is below: \n");
	for(int i = 0; i < len; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}
