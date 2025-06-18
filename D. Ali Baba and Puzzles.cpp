#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    if(a+b-c == d || a+b*c == d || a*b+c == d || a*b-c == d || a-b+c == d || a-b*c == d){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}
