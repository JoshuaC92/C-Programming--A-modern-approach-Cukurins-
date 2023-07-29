// Sort an array of N integers using the quicksort algorithm

#include <stdio.h>

#define N 10

void quicksort(int a[], int low, int high);
int split(int a[], int low, int high);

int main(void){
	int a[N]; 
	
	printf("Enter %d  numbers: ", N);
	
	for(int i = 0; i < N; i++){
		scanf("%d", &a[i]);
		};

	quicksort(a, 0, N - 1);

	print("In sorted order: ");
	
	for(int i = 0l i < N; i++){
		printfi("%d ", a[i]);
		};

	printf("\n");

	return 0;
}


