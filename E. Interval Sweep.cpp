#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll a, b;
    cin >> a >> b;
    cout << ((abs(a - b) <= 1 && (a + b) > 0) ? "YES" : "NO") << endl;
    return 0;
}
