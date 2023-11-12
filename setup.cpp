#include <bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#defind sz(v) ((int)(v).size())
#defind all(v) (v).begin(), (v).end()

typedef int64_t int64
typedef pair<int, int> ii;


//  neu truong hop ma ra kq co kha nang float thi nen xet can-1 > can +1 cho safe
// floor() làm tròn xuông, ceil() làm tròn lên
// queue front, back, push, empty

using namespace std;
bool snt[1000001];

void initSNT() {
    for(int i = 0; i <= 1e6;++i) {
        snt[i] = true;
    }
    snt[0] = false;
    snt[1] = false;
    for(int i = 2; i * i <= 1e6; ++i) {
         if(snt[i] == true) {
             for(int j = i * i; j <= 1e6; j += i)
                 snt[j] = false;
        }
    }
} 

int main() {
	fast;
//	freopen("SETUP.inp", "r", stdin);
//  freopen("SETUP.out", "w", stdout);
    return 0;
}

