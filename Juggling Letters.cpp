// Problem: A. Juggling Letters
// Contest: Codeforces - Codeforces Round #666 (Div. 2)
// URL: https://codeforces.com/contest/1397/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)


#include <bits/stdc++.h>
#include<iostream>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define lli unsigned long long int
#define ll  long long int
#define forit(it, a) for(__typeof(a.begin()) it = a.begin(); it != a.end(); it++)
#define fori(i,n) for(int j=i;j<n;j++)
#define pb push_back
#define ff first
#define ss second
#define pp pair<int,int>
#define mod  1000000007
using namespace std;
void tc()
{  
   unordered_map<char,int>mp;
   int n; cin>>n;
   for(int i=1;i<=n;i++){
   	string str;
   	cin>>str;
   	for(int i=0;i<str.length();i++) mp[str[i]]++;
   }
   bool flag=false;
   for(auto x:mp){
   	int b= x.second; 
   	if(b%n !=0){
   		flag=true;
   		break;
   	}
   	
   }
   if(flag) cout<<"NO"<<endl;
   else cout<<"YES"<<endl;
}
int main()
{
IOS;
lli q; cin>>q; while(q--)
tc();
return 0;
}
