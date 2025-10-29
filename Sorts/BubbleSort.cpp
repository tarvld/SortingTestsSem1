#include<iostream>
#include"BubbleSort.h"
using namespace std;

template <typename T>
void BubbleSort(T arr[], int lenarr) {
	for (int i = 0; i < lenarr - 1; i++) {
		for (int j = 0; j < lenarr - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				smena(arr[j], arr[j + 1]);
			}
		}
	}
}

template void BubbleSort<int>(int arr[], int lenarr);
template void BubbleSort<double>(double arr[], int lenarr);