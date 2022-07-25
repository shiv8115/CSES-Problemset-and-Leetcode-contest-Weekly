// Problem: A. Fake NP
// Contest: Codeforces - Codeforces Round #411 (Div. 2)
// URL: https://codeforces.com/contest/805/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
#define int long long int
int mod= (int)(1e9+7);

// bool isPrime(int n)
// {
    // if (n <= 1)
        // return false;
    // if (n <= 3)
        // return true;
    // if (n % 2 == 0 || n % 3 == 0)
        // return false;
    // for (int i = 5; i * i <= n; i = i + 6)
        // if (n % i == 0 || n % (i + 2) == 0)
            // return false;
    // return true;
// }
// 
int32_t main(){
	// Code write here
	int l, r;
	cin>>l>>r;
	if(l==r) {
        cout<<l<<endl;
        return 0;
	}
	cout<<2<<endl;
	return 0;
}
