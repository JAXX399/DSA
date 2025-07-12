#include <iostream>
#include <vector>
#include <algorithm> // For std::sort
#include <climits>  // For INT_MIN
using namespace std;


class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int largest = 1;
        int curr_arr = 0;
        int last_min = INT_MIN;
        if(nums.size()==0){
            return 0;
        }

        for(int i=0;i<nums.size();i++){
            if(nums[i] - 1 == last_min){
                curr_arr++;
                last_min=nums[i];
            }
            else if(nums[i] != last_min){
                curr_arr=1;
                last_min=nums[i];

            }
            largest=max(largest,curr_arr);
        }
        return largest;

        
    }
};

int main() {
    Solution solution;
    vector<int> nums = {100, 4, 200, 1, 3, 2};
    
    int result = solution.longestConsecutive(nums);
    cout << "Length of Longest Consecutive Sequence: " << result << endl;

    return 0;
}