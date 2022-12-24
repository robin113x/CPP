#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class solution {
public:
	int sol(int arr[], int n) {
		int max_diff = INT_MIN;

		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				int diff = arr[j] - arr[i];
				if (diff > max_diff) {
					max_diff = diff;
				}
			}
		} return max_diff;

	}

	//Best Solution
	int sol2(int arr[], int n) {

		int max_diff = arr[1] - arr[0];
		int min_val = arr[0];
		for (int i = 1; i < n; i++) {
			max_diff = max(max_diff, arr[i] - min_val);
			min_val = min(arr[i], min_val);
		}
		return max_diff;

	}


	//Display an Array
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

	//Creation of array
	int n; cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int size = (int)sizeof(arr) / sizeof(int);
	ss.dispaly(arr, n);
	/*-------------*/
	cout << ss.sol(arr, n) << endl;
	cout << ss.sol2(arr, n);


	return 0;
}
