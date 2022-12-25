#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class solution {
public:
	void sol(int arr[], int n) {
		bool flag;
		for(int i=0;i<n;i++){
			flag =false;
			for(int j=0;j<n-i-1;j++){
				if(arr[j+1]<arr[j]){
					swap(arr[j],arr[j+1]);
					flag=true;
				}
			}
			if(!flag)
				break;
		}

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
	ss.sol(arr, n);

	ss.dispaly(arr, n);

	return 0;
}