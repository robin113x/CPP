#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class solution
{
public:
	double powxn(double x,int n){
		if(n>0)
			return powsol(x,n);
		return 1/powsol(x,n);
	}
	double powsol(double x,int n){
		if (n==0)
		{
			return 1;
		}
		if (n%2==0){
			return powsol(x*x,n/2);
		}
		return x*powsol(x*x,(n-1)/2);
	}
};

int main()
{
	solution ss;
	double x;
	int n;
	cin>>x>>n;
	cout<<ss.powxn(x,n);
	return 0;
}

