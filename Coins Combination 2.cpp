#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,target;
	cin>>n>>target;
	vector<int>nums(n);
	for(int i=0;i<n;i++) cin>>nums[i];
	int t[n+1][target+1];
        for(int i=0;i<=n;i++) t[i][0]=1;
        for(int i=1;i<=target;i++) t[0][i]=1;
         for(int i=1;i<=n;i++){
             for(int j=1;j<=target;j++){
                 if(nums[i-1]<=j)
                 t[i][j]=(t[i][j-nums[i-1]],t[i-1][j]);
                 else
                 t[i][j]=t[i-1][j];
             }
         }
         cout<< t[n][target];
  return 0;
}