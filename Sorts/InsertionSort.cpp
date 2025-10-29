#include<iostream>
#include"InsertionSort.h"
using namespace std;

template <typename T>
void InsertionSort(T arr[], int lenarr) {
	for (int i = 1;i < lenarr;i++) {
		T tmp = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] > tmp) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = tmp;
	}
}

template void InsertionSort<int>(int arr[], int lenarr);
template void InsertionSort<double>(double arr[], int lenarr);