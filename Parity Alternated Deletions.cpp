// Problem: B. Parity Alternated Deletions
// Contest: Codeforces - Codeforces Round #550 (Div. 3)
// URL: https://codeforces.com/contest/1144/problem/B
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
	int n; cin>>n;
	vector<int>v(n);
	int even=0, odd=0;
	int esum=0, osum=0;
	for(int i=0;i<n;i++){
		cin>>v[i];
		if(v[i]%2==0) even++, esum+=v[i];
		else odd++, osum+=v[i];
	}
	sort(v.begin(), v.end());
	int e=0,o=0;
	for(int i=0;i<n;i++){
		if(v[i]%2==0){
			e=v[i];
		}else o=v[i];
	}
	if((even==odd) || abs(even-odd)==1) cout<<0<<endl;
	else{
		
		if(esum>osum) {
			cout<<(esum-osum)-e<<endl;
		}
		else cout<<(osum-esum)-o<<endl;
	}
	return 0;
}
