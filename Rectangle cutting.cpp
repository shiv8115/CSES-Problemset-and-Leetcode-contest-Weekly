// Problem: Rectangle Cutting
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1744
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
#define int long long
const int mod= (int)(1e9+7);
int dp[501][501];
int solve(int n, int m){
	if(n==m) return 0;
	if(n==1) return m-1;
	if(m==1) return n-1;
	if(dp[n][m]!=-1) return dp[n][m];
	if(dp[m][n]!=-1) return dp[m][n];
	dp[n][m]=1e9;
	for(int x=1;x<=n-1;x++){
		dp[n][m]= min(dp[n][m], solve(x,m)+solve(n-x,m)+1);
	}
	for(int y=1;y<=m-1;y++){
		dp[n][m]= min(dp[n][m], solve(n,y)+solve(n,m-y)+1);
	}
	return dp[n][m];
}
int32_t main(){
	int n,m;
	cin>>n>>m;
	memset(dp,-1,sizeof(dp));
	int ans=solve(n,m);
	cout<<ans<<endl;
	return 0;
}