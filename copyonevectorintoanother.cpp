#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>ve;
	ve.push_back(10); 
 	ve.push_back(30); 
	ve.push_back(40); 
	vector<int>arr;
	arr.push_back(10);
	arr.push_back(20);
	arr.push_back(30);
	arr.push_back(40);
	vector<int>ve1(ve);
	vector<int>::iterator it=arr.begin();
	cout<<*(it)<<endl;
	it++;
	cout<<*(it)<<endl;
	for(vector<int>::iterator it =arr.begin(); it!=arr.end();it++)
	{
		cout<<*(it)<<" ";
	}
	return 0;
}
