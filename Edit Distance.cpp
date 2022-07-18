// Problem: Edit Distance
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1639
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
int main(){
	string s1,s2;
	cin>>s1>>s2;
	int n= s1.length();
	int m= s2.length();
	int dp[n+1][m+1];
	for(int i=0;i<=n;i++){
		for(int j=0;j<=m;j++){
			if(i==0) dp[i][j]=j;
			else if(j==0) dp[i][j]=i;
			else{
				if(s1[i-1]==s2[j-1]) dp[i][j]= dp[i-1][j-1];
				else{
					int v1= 1+dp[i-1][j-1]; // Replace
					int v2= 1+dp[i-1][j]; // Delete
					int v3= 1+dp[i][j-1]; // Insert
					dp[i][j]= min(v3,min(v1,v2));
				}
			}
		}
	}
	cout<<dp[n][m]<<endl;
	return 0;
}