#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class solution
{
public:
	void sol(int arr[], int len) {
		int temp[len];
		for (int i = len - 1, j = 0; i >= 0; i--, j++) {
			temp[j] = arr[i];
		}
		for (int i = 0; i < len; i++) {
			arr[i] = temp[i];
		}

	}
	void sol2(int arr[], int size) {
		int low = 0, high = size - 1;
		while (low < high) {
			swap(arr[low], arr[high]);
			low++;
			high--;
		}
	}


	//Display Array
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
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
	int size = (int)sizeof(arr) / sizeof(int);
	ss.dispaly(arr, size);
	ss.sol(arr, size);
	ss.dispaly(arr, size);
	ss.sol2(arr, size);
	ss.dispaly(arr, size);

	/* code */
	return 0;
}