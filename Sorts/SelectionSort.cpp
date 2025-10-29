#include<iostream>
#include"SelectionSort.h"
using namespace std;

template <typename T>
void SelectionSort(T arr[], int lenarr) {
	for (int i = 0; i < lenarr - 1; i++) {
		int minind = i;
		for (int j = i + 1; j < lenarr; j++) {
			if (arr[j] < arr[minind]) {
				minind = j;
			}
		}
		if (minind != i) {
			T tmp = arr[i];
			arr[i] = arr[minind];
			arr[minind] = tmp;
		}
	}
}

template void SelectionSort<int>(int arr[], int lenarr);
template void SelectionSort<double>(double arr[], int lenarr);
