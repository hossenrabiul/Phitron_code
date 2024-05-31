#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b){
    return __gcd(a, b);
}

long long lcm(long long a, long long b){
    return ((a / gcd(a, b)) * b);
}
int main()
{
    long long n, a, b, p, q, ans = 0, overlap;
    cin >> n >> a >> b >> p >> q;

    ans += (n / a) * p;
    ans += (n / b) * q;
    overlap = (n / lcm(a, b));

    ans -= (overlap * (p + q));
    ans += (overlap * max(p, q));
    
    cout << ans;
    return 0;
}