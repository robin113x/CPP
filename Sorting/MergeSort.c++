#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class solution {
public:
	void sol(int arr[], int n) {
		int low=0;
		int hi = n-1;
		MergeSort(arr,low,hi);
	}
	void MergeSort(int arr[],int low,int hi){
		if(low<hi){
			int mid = low+(hi-low)/2;
			MergeSort(arr,low,mid);
			MergeSort(arr,mid+1,hi);
			Merge(arr,low,mid,hi);
		}
	}
	void Merge(int arr[],int low,int mid,int hi){
		int n=mid-low+1;
		int m = hi-mid;
		int temp1[n];
		int temp2[m];
		for(int i=0;i<n;i++){
			temp1[i] = arr[i+low];
		}
		for(int j=0;j<m;j++){
			temp2[j] = arr[mid+1+j];
		}
		int i=0,j=0,k=low;
		while(i<n && j<m){
			if(temp1[i]<=temp2[j]){
				arr[k] = temp1[i];
				i++;
				k++;
			}else{
				arr[k] = temp2[j];
				k++;
				j++;
			}
		}
		while(i<n){
			arr[k] = temp1[i];
			i++;
			k++;
		}
		while(j<m){
			arr[k] = temp2[j];
			k++;
			j++;
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
	ss.dispaly(arr, n);


	return 0;
}