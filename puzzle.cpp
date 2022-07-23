// Problem: A. Puzzles
// Contest: Codeforces - Codeforces Round #196 (Div. 2)
// URL: https://codeforces.com/contest/337/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
#include<iostream>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define lli unsigned long long int
#define ll  long long int
#define forit(it, a) for(__typeof(a.begin()) it = a.begin(); it != a.end(); it++)
#define fori(i,n) for(int j=i;j<n;j++)
#define pb push_back
#define ff first
#define ss second
#define pp pair<int,int>
#define mod  1000000007
using namespace std;
void tc()
{
	int k,n;cin>>k>>n;
	vector<int>arr(n);
	int res=INT_MAX;
	for(int i=0;i<n;i++) cin>>arr[i];
	sort(arr.begin(),arr.end());
	for(int i=0;i<=n-k;i++){
		int minm=INT_MAX, maxm=INT_MIN;
		for(int j=i;j<i+k;j++){
			if(arr[j]<=minm) minm=arr[j];
			if(arr[j]>=maxm) maxm=arr[j];
			
		}
		    int diff= maxm-minm;
			if(diff<=res) res=diff;
	}
	cout<<res<<endl;
}
int main()
{
IOS;
//lli q; cin>>q; while(q--)
tc();
return 0;
}
