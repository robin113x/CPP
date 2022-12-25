#include <iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

class solution {
public:
	void sol() {
		vector<int> v; //static 
		vector<int> *vp = new vector<int>();
		int n;cin>>n;
		for(int i=0;i<n;i++){
			int a;
			cin>>a;
			v.push_back(a);
		}
		
		sort(v.begin(),v.end());

		for(int i=0;i<n;i++){
			cout<<v[i]<<" ";
		}
		cout<<endl<< v.capacity()<<" :  " <<v.size()<<endl;
		for(int i=0;i<n;i++){
			cout<<v.at(i)<<" ";
		}
		cout<<endl;

		vector<int> vr(10,-1);
		for(int i=0;i<vr.size();i++){
			cout<<vr.at(i)<<" ";
		}
			cout<<vr.capacity()<<" ";
		

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

	ss.sol();


	return 0;
}