#include<bits/stdc++.h>
using namespace std;
const int maxN = 1e5 + 9,inf = 1e9 + 9;
long long a[maxN], t[4 * maxN];
void build(int n, int b, int e){
    if(b == e){
        t[n] = a[e];
        return;
    }
    int mid = (b + e) / 2, l = (2 * n), r = (2 * n) + 1;
    build(l, b, mid);
    build(r, mid + 1, e);

    t[n] = min(t[l], t[r]);
}

void updated(int n, int b, int e, int i, int v){
    if(b == e){
        t[n] = v;
        return;
    }
    if(e < i || b > i){
        return;
    }
    int mid = (b + e) / 2, l = (2 * n), r = (2 * n) + 1;
    updated(l, b, mid, i, v);
    updated(r, mid + 1, e, i, v);

    t[n] = min(t[l], t[r]);
}
long long query(int n, int b, int e, int i, int j){
    if(e < i || j < b){
        return inf;  // return right value
    }
    if(b >= i && j >= e){
        return t[n];
    }
    int mid = (b + e) / 2, l = (2 * n), r = (2 * n) + 1;
    return min(query(l, b, mid, i , j), query(r, mid + 1, e, i, j));
}
int main()
{
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }

    build(1, 1, n);

    while(m--){
        int x;
        cin >> x;
        if(x == 1){
            int i, v;
            cin >> i >> v;
            i++;
            updated(1, 1, n, i, v);
        }
        else{
            int l, r;
            cin >> l >> r;
            l++;
            long long sum = query(1, 1, n, l, r);
            cout << sum << '\n';
        }
    }
    return 0;
}