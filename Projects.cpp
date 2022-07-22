// Problem: Projects
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1140
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// Author: Shivam Kumar singh
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
#define int long long int
struct jobs{
	int s,f,p;
};
bool cmp(jobs a, jobs b){
	return a.f < b.f;
}
int binary_search(jobs arr[], int n){
	int low=0, high=n-1, res=-1;
	while(low<=high){
		int mid= low+(high-low)/2;
		if(arr[mid].f < arr[n].s){
			res=mid;
			low=mid+1;
		}else high=mid-1;
	}
	return res;
} 
int32_t main(){
	int n; cin>>n;
	jobs arr[n];
	for(int i=0;i<n;i++){
		cin>> arr[i].s >> arr[i].f >> arr[i].p;
		
	}
	sort(arr, arr+n,cmp);
	vector<int>dp(n,0);
	dp[0]= arr[0].p; // Base Case
	for(int i=1;i<n;i++){
		int inc= arr[i].p;
		int idx= binary_search(arr,i);
		if(idx!=-1){
			inc+= dp[idx];
		}
		int exc= dp[i-1];
		dp[i]= max(inc, exc);
	} 
	cout<<dp[n-1]<<endl;
	return 0;
}