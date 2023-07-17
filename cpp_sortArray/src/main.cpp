#include <iostream>

// declare the function
int *sort(int *arr, int size);
int *sortAsc(int *arr, int n);
// int arr[] = {3, 2, 1};

int main() {
	int arr[] = {1, 2, 3, 4, 5};
	int *sorted = sort(arr, 5);
	for (int i = 0; i < 5; i++) {
		std::cout << sorted[i] << std::endl;
	}
	int *ascSorted = sortAsc(arr, 5);
	for (int i = 0; i < 5; i++) {
		std::cout << ascSorted[i] << std::endl;
	}
return 0;
}

int* sort(int *arr, int size) {
	// Make a copy of the array
	int *sorted = new int[size];
	// populate the copy
	for (int i =0; i < size; i++) {
		sorted[i] = arr[i];
	}
	// sort the copy using bubble sort
	for (int i = 0; i < size -1 ; i++) {
		for (int j =0; j < size- 1; j++) {
			if (sorted[j] > sorted[j+1]) {
				int temp = sorted[j];
				sorted[j] = sorted[j+1];
				sorted[j+1] = temp;
			}
		}
	}
	return sorted;
}

int *sortAsc(int *arr, int n) {
    int i,j;
    for(i=0; i<n; i++)
        for(j=i+1; j<n; j++)
            if(*(arr+j)<*(arr+i))
            {
                int temp=*(arr+j);
                *(arr+j)=*(arr+i);
                *(arr+i)=temp;
            }
    return arr;
}
