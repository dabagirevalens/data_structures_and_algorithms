

#include <iostream>
using namespace std;

void merge(int array[], int left, int mid, int right)
{
	int leftArrSize = mid - left + 1;
	int rightArrSize = right - mid;

	// Create temp arrays to store right and left parts of our main array

	int *leftArray = new int[leftArrSize], *rightArray = new int[rightArrSize];

	// Copy data to temp arrays leftArray[] and rightArray[]

	for (int i = 0; i < leftArrSize; i++)
		leftArray[i] = array[left + i];
	for (int j = 0; j < rightArrSize; j++)
		rightArray[j] = array[mid + 1 + j];

	int indexOfLeftArray = 0, 	indexOfRightArray = 0; 
	int indexOfMergedArray = left; 

	// Merge the temp arrays back into array[left..right]

	while (indexOfLeftArray < leftArrSize && indexOfRightArray < rightArrSize) {
		if (leftArray[indexOfLeftArray] <= rightArray[indexOfRightArray]) {
			array[indexOfMergedArray] = leftArray[indexOfLeftArray];
			indexOfLeftArray++;
		}
		else {
			array[indexOfMergedArray] = rightArray[indexOfRightArray];
			indexOfRightArray++;
		}
		indexOfMergedArray++;
	}

	// Copy the remaining elements of leftArray[], if there are any
	while (indexOfLeftArray < leftArrSize) {
		array[indexOfMergedArray] = leftArray[indexOfLeftArray];
		indexOfLeftArray++;
		indexOfMergedArray++;
	}

	// Copy the remaining elements of rightArray[], if there are any
	while (indexOfRightArray < rightArrSize) {
		array[indexOfMergedArray] = rightArray[indexOfRightArray];
		indexOfRightArray++;
		indexOfMergedArray++;
	}
}


void mergeSort(int array[], int begin, int end)
{
	if (begin >= end)
		return;

	auto mid = begin + (end - begin) / 2;
	mergeSort(array, begin, mid);
	mergeSort(array, mid + 1, end);
	merge(array, begin, mid, end);
}


void printArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
}

int main()
{
	int arr[] = { 12, 11, 13, 5, 6, 7, 1 };
	int arr_size = sizeof(arr) / sizeof(arr[0]);

	cout << "Given array is "<<endl;
	printArray(arr, arr_size);

	mergeSort(arr, 0, arr_size - 1);

	cout << "\nSorted array is "<<endl;
	printArray(arr, arr_size);

	return 0;
}
