#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class solution{
public:
	bool sol(int arr[],int n) {
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++)
				if(arr[i]>arr[j])
					return false;
		}
		return true;
	}

	bool sol2(int arr[],int n){
		for(int i=n-1;i>0;i--){
			if(arr[i]<arr[i-1])
				return false;
		}
		return true;
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
	int n;cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int size = (int)sizeof(arr)/sizeof(int);
	ss.dispaly(arr,n);
	/*-------------*/

	cout<<ss.sol(arr,n)<<endl;
	cout<<ss.sol2(arr,n)<<endl;

	return 0;
}