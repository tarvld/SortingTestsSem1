//#define CATCH_CONFIG_MAIN
#include "C:\Users\User\source\repos\Structs\SortingTests\Tests\catch.hpp"
#include <algorithm>
#include "../Sorts/SelectionSort.h"
#include "../Sorts/Func.h"


TEST_CASE("Selection Проверка нулевого массива", "[bubble][unit]") {
	int arr[3] = {};
	int ShouldBeArr[3] = {};
	SelectionSort(arr, 3);
	REQUIRE(arrEqual(arr, ShouldBeArr, 3));
}
TEST_CASE("Selection Проверка массива с одним элементом", "[bubble][unit]") {
	int arr[1] = { 5 };
	int ShouldBeArr[1] = { 5 };
	SelectionSort(arr, 1);
	REQUIRE(arrEqual(arr, ShouldBeArr, 1));
}
TEST_CASE("Selection Проверка  отсортированного массива", "[bubble][unit]") {
	int arr[5] = { 1, 2, 3, 4, 5 };
	int ShouldBeArr[5] = { 1, 2, 3, 4, 5 };
	SelectionSort(arr, 5);
	REQUIRE(arrEqual(arr, ShouldBeArr, 5));
}
TEST_CASE("Selection Проверка обратного массива", "[bubble][unit]") {
	int arr[5] = { 5, 4, 3, 2, 1 };
	int ShouldBeArr[5] = { 1, 2, 3, 4, 5 };
	SelectionSort(arr, 5);
	REQUIRE(arrEqual(arr, ShouldBeArr, 5));
}
TEST_CASE("Selection Проверка массива double", "[bubble][unit]") {
	double arr[5] = { 5.5, 4.4, 3.3, 2.2, 1.1 };
	double ShouldBeArr[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	SelectionSort(arr, 5);
	REQUIRE(arrEqual(arr, ShouldBeArr, 5));
}