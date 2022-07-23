// Problem: A. Twins
// Contest: Codeforces - Codeforces Round #111 (Div. 2)
// URL: https://codeforces.com/contest/160/problem/A
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
	int n,sum=0; cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++) cin>>v[i], sum+=v[i];
	sort(v.begin(), v.end());
	int s=0,cnt=0;
	for(int i=n-1;i>=0;i--){
		s+=v[i];
		cnt++;
		if(s> sum/2) break;
	}
	cout<<cnt<<endl;
	return 0;
}
