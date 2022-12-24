#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class solution{
public:
	void sol(int arr[],int n) {
		for(int i=0;i<n;i++){
			int j;
			for(j=i+1;j<n;j++){
				if(arr[j]>arr[i])
					break;
			}
			if(j==n)
				cout<<arr[i]<<" ";
		}

	}

	void sol2(int arr[],int n){
		int temp = arr[n-1];
		for(int i=n-1;i>=0;i--){
			if(temp<=arr[i]){
				temp=arr[i];
				cout<<temp<<" ";
			}
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
	int n;cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int size = (int)sizeof(arr)/sizeof(int);
	ss.dispaly(arr,n);
	/*-------------*/
	ss.sol(arr,n);
	cout<<endl;
	ss.sol2(arr,n);
	

	return 0;
}