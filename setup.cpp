#include <bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
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

int gcd(int A, int B) {
    if (B == 0) return A;
    else return gcd(B, A % B);
}

int main() {
	fast;
	initSNT();
	cout<<"hello world"<<endl;
    return 0;
}

