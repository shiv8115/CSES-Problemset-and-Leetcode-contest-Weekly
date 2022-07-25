// Problem: B. Assigning to Classes
// Contest: Codeforces - Codeforces Round #618 (Div. 2)
// URL: https://codeforces.com/contest/1300/problem/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
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
	int n; cin>>n;
	vector<int>v(2*n);
	for(int i=0;i<2*n;i++) cin>>v[i];
	sort(v.begin(), v.end());
	 cout<< abs(v[n]-v[n-1])<<endl;
}
int main()
{
IOS;
lli q; cin>>q; while(q--)
tc();
return 0;
}
