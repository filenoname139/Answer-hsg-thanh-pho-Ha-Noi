#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    freopen("CHOXUAN.inp","r",stdin);
    freopen("CHOXUAN.out","w",stdout);
    ll n,k;
    cin >> n >> k;
    ll tienconlai=n-(k*7);
    if(tienconlai>0){
        cout << tienconlai;
    }else{
        cout << -1;
    }
    return 0;
}
