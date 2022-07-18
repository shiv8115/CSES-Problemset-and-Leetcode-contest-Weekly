// Problem: Book Shop
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1158
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
#define int long long int
int dp[1001][100006];
int mod= (int)(1e9+7);
int solve(int n, int W, int *wt, int *val){
	if(n==0 || W==0) return 0;
	if(dp[n][W])
	if(wt[n-1]<=W) {
		return dp[n][W]=max((val[n-1]+solve(n-1,W-wt[n-1],wt,val))%mod, solve(n-1,W,wt,val)%mod)%mod;
	}else
	return dp[n][W]= solve(n-1,W,wt,val)%mod;
}
int32_t main(){
	int n,W; cin>>n>>W;
	int wt[n], val[n];
	memset(dp,-1,sizeof(dp));
	for(int i=0;i<n;i++) cin>>wt[i];
	for(int i=0;i<n;i++) cin>>val[i];
	// int dp[n+1][W+1];
	// for(int i=0;i<=n;i++){
		// for(int j=0;j<=W;j++){
			// if(i==0 || j==0) dp[i][j]=0;
			// else{
				// if(wt[i-1]<=j) {
					// dp[i][j]= max(val[i-1]+dp[i-1][j-wt[i-1]], dp[i-1][j])%mod;
				// }
// 				
				// else dp[i][j]= (dp[i-1][j])%mod;
			// }
		// }
	// }
	// cout<<dp[n][W];
	int res=solve(n-1,W,wt,val);
	cout<<res<<endl;
	return 0;
}