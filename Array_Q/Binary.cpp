#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class solution{
public:

	//Binary Search using iterative method
	int sol(int arr[], int size, int val) {
		int low = 0, high = size - 1;
		while (low < high) {
			int mid = low + (high - low) / 2;
			int ele = arr[mid];
			if (ele == val)
				return mid;
			if (ele > val)
				high = mid - 1;
			else
				low = mid + 1;
		}
		return -1;

	}

	//Binary Search using Recursion
	int sol2(int arr[], int low, int hi, int val) {
		if (low < hi) {
			int mid = low + (hi - low) / 2;
			int ele = arr[mid];
			if (ele == val) return mid;
			if (ele > val) return sol2(arr, low, mid - 1, val);
			else
				return sol2(arr, mid + 1, hi, val);
		}
		return -1;
	}


	void dispaly(int arr[], int size) {
		for (int i = 0; i < size; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
	}
};

int main(int argc, char const *argv[])
{
	solution ss;
	int arr[] = {10, 20, 30, 44, 50, 55, 60, 65, 70, 80, 90};
	int size = sizeof(arr) / sizeof(int);
	ss.dispaly(arr, size);
	cout << ss.sol(arr, size, 5) << endl;
	cout << ss.sol2(arr, 0, size - 1, 5) << endl;

	return 0;
}