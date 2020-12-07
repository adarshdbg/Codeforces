#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {

    long long b,d,s;
    scanf("%lld %lld %lld",&b,&d,&s);
    if(b == d && d ==s) {
        printf("0");
    }
    else {
            long long ans = 0;
        long long mx = max(b,max(d,s));
        if(b < mx-1) ans += (mx-1)-b;
        if(d < mx-1) ans += (mx-1)-d;
        if(s < mx-1) ans += (mx-1)-s;
        printf("%lld",ans);
    }
}
