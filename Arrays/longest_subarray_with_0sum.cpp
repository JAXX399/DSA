#include<iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution{
    public:
    int maxLen(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int, int> prefixSumMap;
        int maxLength = 0, currentSum = 0;

        for (int i = 0; i < n; i++) {
            currentSum += arr[i];

            if (currentSum == 0) {
                maxLength = i + 1; // If sum is zero from start to current index
            }

            if (prefixSumMap.find(currentSum) != prefixSumMap.end()) {
                maxLength = max(maxLength, i - prefixSumMap[currentSum]);
            } else {
                prefixSumMap[currentSum] = i; // Store the first occurrence of this sum
            }
        }

        return maxLength;
    }

};