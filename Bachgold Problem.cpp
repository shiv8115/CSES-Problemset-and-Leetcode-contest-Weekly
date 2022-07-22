#include<bits/stdc++.h>
using namespace std;
#define int long long int
int mod= (int)(1e9+7);

int32_t main(){
	// Code write here
	int n; cin>>n;
	if(n%2==0){
		cout<<n/2<<endl;
		int x=n/2;
		while(x--){
			cout<<2<<" ";
		}
		cout<<endl;
	}else{
		//cout<<"Hello";
		n= n-1;
		int x= n/2;
		vector<int>v;
		int cnt=0;
		while(x--){
			v.push_back(2);
			cnt++;
		}
		v[cnt-1]=3;
		cout<<cnt<<endl;
		for(int i=0;i<cnt;i++) cout<<v[i]<<" ";
		cout<<endl;
	}
	return 0;
}
