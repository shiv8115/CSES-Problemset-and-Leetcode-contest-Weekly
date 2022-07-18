#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>&nums, int target){
	int n= nums.size();
	int dp[n+1][target+1];
	for(int i=0;i<=n;i++) dp[i][0]=0;
	for(int i=0;i<=target;i++) dp[0][i]=1e9;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=target;j++){
			if(nums[i-1]<=j){
				dp[i][j]= min(dp[i-1][j], dp[i][j-nums[i-1]]+1)%1000000007;
			}else dp[i][j]= (dp[i-1][j])%1000000007;
		}
	}
	return (dp[n][target]==1e9?-1:(dp[n][target])%1000000007);
	
}
int main(){
	int n, target;
	cin>>n>>target;
	vector<int>v(n);
	for(int i=0;i<n;i++) cin>>v[i];
	int ans= solve(v,target);
	cout<<ans<<endl;
}