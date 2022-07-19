// Problem: Removal Game
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1097
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
	int n; cin>>n;
	vector<int>nums(n);
	for(int i=0;i<n;i++) cin>>nums[i];
	
	int dp[n][n];
	for(int g=0;g<n;g++){
		for(int i=0,j=g;j<n;i++,j++){
			if(g==0) dp[i][j]= nums[i];
			else if(g==1) dp[i][j]=max(nums[i], nums[j]);
			else{
				int v1= nums[i]+ min(dp[i+2][j], dp[i+1][j-1]);
				int v2= nums[j]+ min(dp[i+1][j-1], dp[i][j-2]);
				dp[i][j]= max(v1,v2);
			}
		}
	}
	int ans= dp[0][n-1];
	cout<<ans<<endl;
	
	return 0;
}

