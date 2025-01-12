#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to calculate the XOR expression value
int calculateXorSum(int a, int b, int c) {
    return (a ^ b) + (b ^ c) + (a ^ c);
}

// Function to find three numbers maximizing the XOR expression
void maximizeXorSum(int l, int r) {
    vector<int> candidates;

    // Add numbers from the start of the range
    for (int i = l; i < l + 5 && i <= r; ++i) {
        candidates.push_back(i);
    }

    // Add numbers from the end of the range
    for (int i = r; i > r - 5 && i >= l; --i) {
        candidates.push_back(i);
    }

    // Remove duplicates in case the ranges overlap
    sort(candidates.begin(), candidates.end());
    candidates.erase(unique(candidates.begin(), candidates.end()), candidates.end());

    int maxVal = 0;
    vector<int> result = {l, l + 1, l + 2};

    // Iterate over all combinations of three distinct integers from the candidate set
    int n = candidates.size();
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            for (int k = j + 1; k < n; ++k) {
                int a = candidates[i], b = candidates[j], c = candidates[k];
                int currentVal = calculateXorSum(a, b, c);
                if (currentVal > maxVal) {
                    maxVal = currentVal;
                    result = {a, b, c};
                }
            }
        }
    }

    // Output the result
    cout << result[0] << " " << result[1] << " " << result[2] << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int l, r;

        cin >> l >> r;

        maximizeXorSum(l, r);
    }

    return 0;
}
