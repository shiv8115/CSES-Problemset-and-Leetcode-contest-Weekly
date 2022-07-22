// Problem: A. Yet Another Two Integers Problem
// Contest: Codeforces - Codeforces Round #667 (Div. 3)
// URL: https://codeforces.com/contest/1409/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
void tc()
{
	long long int a,b;
	cin>>a>>b;
	cout << (abs(a - b) + 9) / 10 << endl;
}
int main()
{

long long int q; cin>>q; while(q--)
tc();
return 0;
}

