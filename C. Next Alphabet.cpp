#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    char c;
    cin >> c;
    if (c == 'z')
        cout << 'a' << endl;
    else
        cout << char(c + 1) << endl;
    return 0;
}
