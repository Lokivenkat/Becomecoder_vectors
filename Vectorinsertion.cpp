#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>ve={-1,-1,-1};

	ve.insert(ve.begin(),9); //inserts at 1st place 
	ve.insert(ve.begin()+1,10); //inserts at 2nd place
	ve.insert(ve.end(),11); //inserts at end 
	for(auto it:ve)
	{
		cout<<it<<" ";  
	}
	return 0;	
}
