#include <bits/stdc++.h>
using namespace std;
#define ll long long

unordered_map<ll, ll> memo_d;
unordered_map<ll, ll> memo_count;

// Optimized divisor function using square root method
ll d(ll h) {
    if (memo_d.find(h) != memo_d.end()) return memo_d[h];
    ll largest_divisor = 1;
    for (ll i = 1; i * i <= h; i++) {
        if (h % i == 0) {
            largest_divisor = max(largest_divisor, i);
            if (i != h / i && h / i != h) {
                largest_divisor = max(largest_divisor, h / i);
            }
        }
    }
    memo_d[h] = largest_divisor;
    return largest_divisor;
}

// Optimized sequence count with memoization
ll countSequence(ll h) {
    if (h == 1) return 0;
    if (memo_count.find(h) != memo_count.end()) return memo_count[h];

    ll count = 0;
    while (h != 1) {
        h = d(h);
        count++;
    }
    memo_count[h] = count;
    return count;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll h, k;
        cin >> h >> k;
        ll maxCount = 0;

        for (ll i = 1; i <= k; i++) {  // Start from 1 up to k
            ll newh = h * i;
            maxCount = max(maxCount, countSequence(newh));
        }

        cout << maxCount << endl;
    }
    return 0;
}
