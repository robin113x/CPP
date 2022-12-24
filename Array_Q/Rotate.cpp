#include <iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

class solution {
public:
	//Rotate by n
	void sol(int arr[], int size, int n) {
		
		if (abs(n) > size)
			n = n % size;
		if(n<0)
			n+=size;

		rev_arr(arr, 0, n);
		rev_arr(arr, n+1 , size);
		rev_arr(arr, 0, size);

	}
	void rev_arr(int arr[], int low, int hi) {
		while(low<hi){
			swap(arr[low],arr[hi]);
			low++;
			hi--;
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
	int arr[] = {10,20,30,40,50,60,70,80};
	int size = (int)sizeof(arr)/sizeof(int);
	ss.dispaly(arr,size);
	ss.sol(arr,size-1,11);
	ss.dispaly(arr,size);
	return 0;
}