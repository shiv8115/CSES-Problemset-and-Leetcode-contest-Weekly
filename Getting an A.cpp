// Problem: B. Getting an A
// Contest: Codeforces - Codeforces Round #491 (Div. 2)
// URL: https://codeforces.com/contest/991/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
//#define int long long int
int mod= (int)(1e9+7);

int32_t main(){
	// Code write here
	double n; cin>>n;
	double sum=0.0;
	vector<double>v(n);
	for(int i=0;i<n;i++) cin>>v[i], sum+=v[i];
	sort(v.begin(), v.end());
	if(sum/n >= 4.5) cout<<0<<endl;
	else{
		int cnt=0;
		double req= (4.5*n) - (sum);
		double s=0;
		for(int i=0;i<n;i++){
			if(v[i]!=5){
				cnt++;
				s+=(5-v[i]);
				if(s>=req) break;
			}
		}
		cout<<cnt<<endl;
	}
	
	return 0;
}
