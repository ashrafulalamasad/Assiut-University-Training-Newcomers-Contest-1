#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll eyes, mouths, bodies;
    cin >> eyes >> mouths >> bodies;
    ll count = min({eyes, mouths, bodies});
    eyes -= count;
    mouths -= count;
    bodies -= count;
    count += min(eyes / 2, bodies);
    eyes -= min(eyes / 2, bodies) * 2;
    count += min({eyes / 2, mouths, bodies});
    cout << count << endl;
    return 0;
}
