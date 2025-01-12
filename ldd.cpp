#include <bits/stdc++.h>
using namespace std;

unordered_map<int, int> divisor_cache;

int largest_divisor(int n) {
    if (divisor_cache.find(n) != divisor_cache.end()) {
        return divisor_cache[n];
    }
    for (int i = sqrt(n); i > 0; --i) {
        if (n % i == 0) {
            divisor_cache[n] = (i == n) ? 1 : max(i, n / i);
            return divisor_cache[n];
        }
    }
    divisor_cache[n] = 1;
    return 1;
}

int monsters_defeated(int H, int K) {
    int max_monsters = 0;
    for (int m = 1; m <= K; ++m) {
        int health = H * m;
        int monsters = 0;
        while (health > 1) {
            health = largest_divisor(health);
            ++monsters;
        }
        max_monsters = max(max_monsters, monsters);
    }
    return max_monsters;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int H, K;
        cin >> H >> K;
        cout << monsters_defeated(H, K) << endl;
    }
    return 0;
}
