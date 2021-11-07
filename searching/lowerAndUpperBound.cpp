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
int lowerBound(int x, int v[])
{
    int l = -1, r = n, m;
    while ((l + 1) < r)
    {
        m = (l + r) / 2;
        if (x <= v[m])
            r = m;
        else
            l = m;
    }
    return r; //r will be on the lower bound of x
}

int upperBound(int x, int v[])
{
    int l = -1, r = n, m;
    while ((l + 1) < r)
    {
        m = (l + r) / 2;
        if (x >= v[m]) // finding the next equal x on thr right side
            l = m;
        else
            r = m; // rwill be on the upper bound
    }
    return r;
}

void solve()
{
    cin >> n;
    int v[n];
    int x;
    for (auto &x : v)
        cin >> x;
    int q;
    cin >> x;
    int l = lowerBound(x, v);
    int r = upperBound(x, v);
    cout << l << " " << r << endl;
}

int main()
{
    fastio;
    solve();
    return Monke;
}