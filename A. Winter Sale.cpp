#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    double X, P;
    cin >> X >> P;
    double O = P / (1 - X / 100.0);
    cout << fixed << setprecision(2) << O << endl;
    return 0;
}
