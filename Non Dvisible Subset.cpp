// Problem: Non-Divisible Subset
// Contest: HackerRank - Algorithms - Implementation - Non-Divisible Subset - Prepare - Algorithms - Implementation
// URL: https://www.hackerrank.com/challenges/non-divisible-subset/problem?isFullScreen=true
// Memory Limit: 512 MB
// Time Limit: 4000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
//#define int long long int
int mod= (int)(1e9+7);

int32_t main(){
	// Code write here
	int n,k; cin>>n>>k;
	vector<int>v(n);
	for(int i=0;i<n;i++) cin>>v[i];
	vector<int>arr(k);
	for(int i=0;i<n;i++){
		arr[v[i]%k]++;
	}
	int res= min(1,arr[0]);
	for(int i=1;2*i<=k;i++){
		int j= (k-i)%k;
		if(i==j) res+= min(1,arr[i]);
		else res+= max(arr[i], arr[j]);
	}
	cout<<res<<endl;
	return 0;
}