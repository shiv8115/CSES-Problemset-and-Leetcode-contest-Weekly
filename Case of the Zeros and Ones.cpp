// Problem: A. Case of the Zeros and Ones
// Contest: Codeforces - Codeforces Round #310 (Div. 2)
// URL: https://codeforces.com/contest/556/problem/A
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
	string s; cin>>s;
	int o=0,z=0;
	for(int i=0;i<n;i++) {
		if(s[i]=='1') o++;
		else z++;
	}
	cout<<abs(o-z)<<endl;
	return 0;
}
