#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class solution {
public:
	void sol(int arr[], int n) {
		int pivot=arr[0];
		int i=0,j=0;
		while(i<n){
			if(arr[i]> pivot)
				i++;
			else{
				swap(arr[i],arr[j]);
				i++;
				j++;
			}
		}
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
	int n; cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	ss.dispaly(arr, n);
	ss.sol(arr, n);


	return 0;
}