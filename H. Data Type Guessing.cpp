#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, k, a;
    cin >> n >> k >> a;
    double result = (1.0 * n * k) / a;
    if (result != (ll)result)
        cout << "double" << endl;
    else if (result <= 2147483647)
        cout << "int" << endl;
    else
        cout << "long long" << endl;
    return 0;
}
