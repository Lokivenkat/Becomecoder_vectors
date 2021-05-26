#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>ve;
	ve.push_back(10); //insert 10
	ve.push_back(20); //insert 20
	ve.push_back(30); //insert 30
	ve.push_back(40); //insert 40
	ve.pop_back(); //pops last element
	for(int i=0;i<ve.size();i++)
	{
		cout<<ve[i]<<" ";
	}
}
