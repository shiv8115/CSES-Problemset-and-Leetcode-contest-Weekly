#include<bits/stdc++.h>
using namespace std;
#define int long long int
int mod= (int)(1e9+7);

int32_t main(){
	// Code write here
	int n;
	cin>>n;
	vector<int>sieve(n+1,1);
	vector<int>freq(n+1,0);
	for(int i=2;2*i<=n;i++){                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            
		if(sieve[i]==1){
			for(int j=i; j<=n;j=j+i){
				sieve[j]=0;
				freq[j]++;
			}
		}
	}
	int count=0;
	for(int i=4;i<=n;i++){
		if(freq[i]==2) count++;
	}
	cout<<count<<endl;
	return 0;
}
