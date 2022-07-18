#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	int dp[n+1];
	dp[0]=0;
	for(int i=1;i<=n;i++){
		dp[i]=1e9;
		string str= to_string(i);
		for(char c:str){
			dp[i]= min(dp[i],dp[i-(c-'0')]+1);
		}
	}
	cout<<dp[n]<<endl;
	return 0;
}