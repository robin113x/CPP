#include <iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

class solution {
public:
	void sol(int arr1[],int arr2[], int n,int m) {
		vector<int> res;
		int i=0,j=0;
		while(i<n && j<m){
			if(arr1[i]<=arr2[j]){
				res.push_back(arr1[i]);
				i++;
			}else{
				res.push_back(arr2[j]);
				j++;
			}
		}
		while(i<n){
			res.push_back(arr1[i]);
			i++;
			
		}
		while(j<m){
			res.push_back(arr2[j]);
			j++;
			
		}

		for(int k=0;k<res.size();k++){
			cout<<res.at(k)<<" ";
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
	int n=5;
	int m=7;
	int arr1[5] = {1,3,5,6,19};
	int arr2[7] = {2,4,7,8,9,10,12};

	ss.sol(arr1,arr2, n,m);


	return 0;
}