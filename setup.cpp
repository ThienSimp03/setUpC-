#include <bits/stdc++.h>
using namespace std;
#define NO_BRAIN int main()
#define local Thien_noobs
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
#define vii vector<pii>
#define vll vector<pll>
#define vb vector<bool>
#define vc vector
#define mpi map<int, int>
#define mpl mp<ll, ll>
#define ump unordered_map<int, int>
#define umpl unordered_map<ll, l>
#define si set<int>
#define sl set<ll>
#define usi unordered_set<int>
#define usl unordered_set<ll>
#define el cout << '\n';
#define all(x) x.begin(), x.end()
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define f0(i, n) for (int i = 0; i < n; ++i)
#define f1(i, n) for (int i = 1; i <= n; ++i)
#define rev(i, a, b) for (int i = a; i >= b; --i)
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
#ifndef local
#define db(x)          \
    cerr << #x << " "; \
    _print(x);         \
    cerr << endl;
#else
#define db(x)
#endif

void _print(ll t) { cerr << t; }
void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(float t) { cerr << t; }
void _print(ull t) { cerr << t; }
void _print(bool x)
{
    if (x)
    {
        cerr << "True";
    }
    else
        cerr << "False";
}
template <class T, class S>
void _print(pair<T, S> p)
{
    cerr << p.first << " " << p.second << endl;
}

template <class T>
void _print(vector<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}

template <class T>
void _print(set<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(multiset<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}

template <class T, class S>
void _print(map<T, S> v)
{
    cerr << "[ ";
    for (auto i : v)
    {
        _print(i);
        cerr << endl;
    }
    cerr << " ]";
}

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
#define MOD 1000000007

int n, ans, q;

void solve(int tc)
{
    ans = 0;
}

NO_BRAIN
{
    IOS;
    int TC;
    cin >> TC;
    f1(tc, TC)
    {
        solve(tc);
    }
    return 0;
}