#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

class Solution {
public:
    // Approach: Hashing
    // Time Complexity: O(nlogn) + O(m)

    // Space Complexity: O(n)


    int majorityElement(vector<int>& nums) {
        map<int,int>mpp;
        int n = nums.size();
        for(int i = 0;i < n; i++){
            mpp[nums[i]]++;

        }
        for(auto it: mpp){
            if(it.second > (n/2)){
                return it.first;
            }
        }
        return -1;
    }

    // Alternative Approach: Boyer-Moore Voting Algorithm
    // Time Complexity: O(n)    
    // Space Complexity: O(1)
    int majorityElement_boyer_moore(vector<int>& nums) {
        int count = 0;
        int candidate = 0;

        for(int num : nums) {
            if(count == 0) {
                candidate = num;
            }
            count += (num == candidate) ? 1 : -1;
        }

        return candidate;
    }
};


int main() {
    Solution solution;
    vector<int> nums = {3, 2, 3};
    
    int result = solution.majorityElement(nums);
    cout << "Majority Element: " << result << endl;

    // Testing the Boyer-Moore Voting Algorithm
    int result_boyer_moore = solution.majorityElement_boyer_moore(nums);
    cout << "Majority Element (Boyer-Moore): " << result_boyer_moore << endl;

    return 0;
}