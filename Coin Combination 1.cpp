#include<bits/stdc++.h>
using namespace std;
#define MOD 1e9+7;
int main(){
	
	long long int n,target;
	cin>>n>>target;
	vector<long long int>nums(n);
	for(long long int i=0;i<n;i++) cin>>nums[i];
	vector<long long int>dp(target+1,0);
	dp[0]=1;
	for(long long int amt=1;amt<=target;amt++){
		for(long long int j=0;j<n;j++){
			if(amt-nums[j]>=0) dp[amt] = (dp[amt]+dp[amt-nums[j]])%1000000007;
		}
	}
	cout<<dp[target]<<endl;
}