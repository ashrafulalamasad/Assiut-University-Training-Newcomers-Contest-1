#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n;
    cin >> n;
    ll x = n / 10, y = n % 10;
    if(x != 0 && y % x == 0){
        cout << "YES" << endl;
    }else if (y != 0 && x % y == 0){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}
