#include<iostream>
#include"ExchangeSort.h"
using namespace std;

template <typename T>
void ExchangeSort(T arr[], int lenarr) {
	for (int i = 0; i < lenarr; i++) {
		for (int j = i + 1; j < lenarr; j++) {
			if (arr[j] < arr[i]) {
				T tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}

template void ExchangeSort<int>(int arr[], int lenarr);
template void ExchangeSort<double>(double arr[], int lenarr);