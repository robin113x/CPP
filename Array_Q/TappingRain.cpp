#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class solution {
public:
	int sol(int arr[], int n) {
		int temp1[n];
		int temp2[n];
		int res=0;

		temp1[0] = arr[0];
		for (int i = 1; i < n; i++) {
			temp1[i] = max(arr[i], temp1[i - 1]);
		}

		temp2[n - 1] = arr[n - 1];
		for (int i = n - 2; i >= 0; i--) {
			temp2[i] = max(arr[i],temp2[i+1]);
		}
		for(int i=0;i<n;i++){
			res+=min(temp1[i],temp2[i])-arr[i];
		}
		return res;

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