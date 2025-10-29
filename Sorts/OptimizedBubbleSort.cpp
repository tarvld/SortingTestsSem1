#include<iostream>
#include"OptimizedBubbleSort.h"
using namespace std;

template <typename T>
void OptimizedBubbleSort(T arr[], int lenarr) {
	for (int i = 0; i < lenarr - 1; i++) {
		bool flg = false;
		for (int j = 0; j < lenarr - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				smena(arr[j], arr[j + 1]);
				flg = true;
			}
		}
		if (!flg)
			break;
	}
}

template void OptimizedBubbleSort<int>(int arr[], int lenarr);
template void OptimizedBubbleSort<double>(double arr[], int lenarr);