#include <bits/stdc++.h>
using namespace std;
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define NL "\n"
#define all(x) (x).begin(), (x).end()
#define tc(x) \
    int x;    \
    cin >> x; \
    while (x--)
#define mp make_pair
#define pb push_back
#define forN(x) for (int i = 0; i < x; i++)
#define vii vector<int>
#define vLL vector<long long>
using LL = long long;
using ull = unsigned long long int;
const int Monke = 0;
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return a.second < b.second; }

int n;


bool binarySearch(int x,int v[])
{
    int l = 0, r = n - 1, m;
    while (l <= r)
    {
        m = (l + r) / 2;
        if (v[m] == x)
            return true;
        else if (x < v[m])
            r = m - 1;
        else
            l = m + 1;
    }
    return false;
}

void solve()
{
    cin >> n;
    int x;
    int v[n];
    for(int i=0;i<n;i++){
    cin>>v[i];
    }
    sort(v,v+n);
    cin >> x;
    bool found = binarySearch(x,v);
    if (found)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    fastio;
    tc(c)
        solve();
    return Monke;
}