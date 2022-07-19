// Problem: Money Sums
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1745
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
#define int long long 
vector<int>subset_sum(vector<int>&nums, int target){
	vector<int>v;
	int n=nums.size();
	int dp[nums.size()+1][target+1];
	for(int i=0;i<=target;i++) dp[0][i]=0;
	for(int i=0;i<n;i++) dp[i][0]=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=target;j++){
			if(nums[i-1]<=j){
				dp[i][j]= dp[i-1][j-nums[i-1]] || dp[i-1][j];
			}
			else dp[i][j]= dp[i-1][j];
			
		}
	}
	for(int i=0;i<=target;i++){
		if(dp[n][i]==1) v.push_back(i);
	}
	return v;
}
int32_t main(){
	int n; cin>>n;
	vector<int>v(n);
	int sum=0;
	for(int i=0;i<n;i++) cin>>v[i], sum+=v[i];
	vector<int> res= subset_sum(v,sum);
	int sz= res.size();
	cout<<sz<<endl;
	for(int i=0;i<res.size();i++){
		cout<<res[i]<<" ";
	}
		cout<<endl;
	
	return 0;
}