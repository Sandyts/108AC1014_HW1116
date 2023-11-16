#include <stdio.h>
#include <stdlib.h>

// Function declaration: Bubble Sort
void bubbleSort(int arr[], int n);

int main() {
	int n;

	// Input array size
	printf("Enter the size of the array: ");
	scanf("%d", &n);

	// Dynamically allocate memory for the array
	int *arr = (int *)malloc(n * sizeof(int));

	// Input array elements
	printf("Enter %d integers as array elements:\n", n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	// Call the bubble sort function
	bubbleSort(arr, n);

	// Output the sorted array
	printf("Sorted array:\n");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	// Free dynamically allocated memory for the array
	free(arr);

	return 0;
}

// Function definition: Bubble Sort
void bubbleSort(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		// Reduce the number of comparisons each pass
		int swapsMade = 0;
		for (int j = 0; j < n - i - 1; j++) {
			// If the current element is greater than the next element, swap them
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				swapsMade = 1;
			}
		}

		// If no swaps are made, the array is already sorted
		if (swapsMade == 0) {
			break;
		}
	}
}
