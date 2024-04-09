#include <bits/stdc++.h>
using namespace std;
#define arr array
#define pb push_back
#define fi first
#define se second
#define I int
#define ll long long
#define ull unsigned long long
#define ld long double
#define pii pair<int, int>
#define pll pair<ll, ll>
#define tiii tuple<int, int, int>
#define vi vector<int>
#define vl vc<ll>
#define vll vector<pll>
#define vii vector<pii>
#define vb vector<bool>
#define vc vector
#define L cout << '\n';
#define all(x) x.begin(), x.end()
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define rev(i, a, b) for (int i = a; i > b; --i)
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);
#define setpr(x) cout << setprecision(x) << fixed
#define sz(v) ((int)(v).size())
#define seea(a, x, y)           \
    for (int i = x; i < y; i++) \
    {                           \
        cin >> a[i];            \
    }
#define seev(v, n)              \
    for (int i = 0; i < n; i++) \
    {                           \
        int x;                  \
        cin >> x;               \
        v.push_back(x);         \
    }
#define sees(s, n)              \
    for (int i = 0; i < n; i++) \
    {                           \
        int x;                  \
        cin >> x;               \
        s.insert(x);            \
    }
#define ms0(a) memset(a, 0, sizeof(a))
#define yes() cout << "YES\n"
#define no() cout << "NO\n"

#define mo 1000000007

template <class T, auto S>
std::ostream &operator<<(std::ostream &os, const std::array<T, S> &v)
{
    for (auto i : v)
        os << i << ' ';
    return os;
}
template <class T, auto S, auto V>
std::ostream &operator<<(std::ostream &os, const std::array<std::array<T, S>, V> &v)
{
    for (auto i : v)
        for (auto j : i)
            os << j << " ";
    os << "\n";
    return os;
}
template <class T>
std::ostream &operator<<(std::ostream &os, const std::vector<T> &v)
{
    for (auto i : v)
        os << i << ' ';
    return os;
}
template <class T>
std::ostream &operator<<(std::ostream &os, const std::set<T> &v)
{
    for (auto i : v)
        os << i << ' ';
    return os;
}
template <class T, class S>
std::ostream &operator<<(std::ostream &os, const std::map<T, S> &v)
{
    for (auto i : v)
        os << i.first << " " << i.second << "\n";
    return os;
}
template <class T, class S>
std::ostream &operator<<(std::ostream &os, const std::pair<T, S> &v)
{
    os << v.first << " " << v.second << "\n";
    return os;
}
template <class T>
std::ostream &operator<<(std::ostream &os, const std::vector<std::vector<T>> &v)
{
    for (auto i : v)
        for (auto j : i)
            os << j << " ";
    os << "\n";
    return os;
}

void solve()
{
}

int main()
{
    IOS;
    int TC;
    cin >> TC;
    while (TC--)
    {
        solve();
    }
    return 0;
}