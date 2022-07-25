// Problem: B. Disturbed People
// Contest: Codeforces - Codeforces Round #521 (Div. 3)
// URL: https://codeforces.com/contest/1077/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
#define int long long int
int mod= (int)(1e9+7);

int32_t main(){
	// Code write here
	int n; cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++) cin>>v[i];
	int cnt=0;
	for(int i=1;i<n-1;i++){
		if(v[i]==0 && v[i-1]==1 && v[i+1]==1){
			cnt++;
			v[i-1]=0;
			v[i+1]=0;
		}
	}
	cout<<cnt<<endl;
	return 0;
}
