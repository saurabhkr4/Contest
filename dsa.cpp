#include <bits/stdc++.h> 
using namespace std; 

bool isValid(vector<long long>& positive, vector<long long>& negative, long long maxSum) { long long posIndex = 0, negIndex = 0, currentSum = 0, maxObservedSum = 0; 
while (posIndex < positive.size() || negIndex < negative.size()) { 
 while (currentSum + (posIndex < positive.size() ? positive[posIndex] : 0) > maxSum) { 
 if (negIndex < negative.size()) { 
 currentSum += negative[negIndex]; 
 maxObservedSum = max(maxObservedSum, currentSum); 
negIndex++; 
 } else { 
return false; 
} 
 currentSum = max(0LL, currentSum); 
 } 
if (posIndex < positive.size()) { 
 currentSum += positive[posIndex]; 
 maxObservedSum = max(maxObservedSum, currentSum); 
 posIndex++; 
 } else if (negIndex < negative.size()) { 
currentSum += negative[negIndex]; 
 maxObservedSum = max(maxObservedSum, currentSum); 
 negIndex++; 
currentSum = max(0LL, currentSum); 
 } 
 } 
 return maxObservedSum <= maxSum; 
} 

void solve() { 
 int testCases;  cin >> testCases;  
 while (testCases--) { 
long long arraySize; 
cin >> arraySize; 
 vector<long long> array(arraySize), positive, negative; 
 for (long long i = 0; i < arraySize; i++) { 
cin >> array[i]; 
 if (array[i] >= 0) 
positive.push_back(array[i]); 
 else 
negative.push_back(array[i]); 
 } 

 if (positive.empty()) { 
 cout << 0 << endl; 
continue; 
} 

long long left = *max_element(positive.begin(), positive.end()); 
 long long right = accumulate(positive.begin(), positive.end(), 0LL); 
 long long result = right; 

 while (left <= right) { 
 long long mid = (left + right) / 2; 
 if (isValid(positive, negative, mid)) { 
 result = mid; 
 right = mid - 1; 
} else { 
left = mid + 1; 
 } 
 } 
cout << result << endl;  } 
} 

int main() { 
 solve(); 
return 0; 
} 
