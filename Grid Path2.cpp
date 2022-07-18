// Problem: Grid Paths
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1638
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
int mod= (int)(1e9+7);
int main(){
	int n;
	cin>>n;
	char arr[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++) cin>>arr[i][j];
	}
	int dp[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(arr[i][j]=='*') dp[i][j]=0;
			else if(i==0 && j==0) dp[i][j]=1;
			else{
				int left=0, up=0;
				if(i>0) up= dp[i-1][j];
				if(j>0) left= dp[i][j-1];
				dp[i][j]= (left+up)%mod;
			}
			
			
		}
	}
	cout<<dp[n-1][n-1]<<endl;
	return 0;
}