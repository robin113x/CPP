#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class solution {
public:
	int sol(int arr[], int n) {
		int max_profit = 0;
		for(int i=1;i<n;i++){
			if(arr[i]>arr[i-1])
				max_profit+=arr[i]-arr[i-1];
		}return max_profit;

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
	int res=ss.sol(arr, n);
	cout<<res<<endl;


	return 0;
}