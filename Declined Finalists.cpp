// Problem: A. Declined Finalists
// Contest: Codeforces - MemSQL Start[c]UP 3.0 - Round 1
// URL: https://codeforces.com/contest/859/problem/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
#define int long long int
int mod= (int)(1e9+7);

int32_t main(){
	// Code write here
	int n,maxm=INT_MIN;
	cin>>n;
	vector<int>arr(n);
	for(int i=0;i<n;i++) {
		cin>>arr[i];
		maxm=max(maxm,arr[i]);
	}
	if(maxm<=25) cout<<0<<endl;
	else cout<<maxm-25<<endl;
	return 0;
}
