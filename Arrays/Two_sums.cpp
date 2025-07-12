#include <vector>
#include <map>
#include <iostream>
using namespace std;

//Approach: Hashing
// Time Complexity: O(n)


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            int num=nums[i];
            int more_needed = target - num;
            if(mpp.find(more_needed) != mpp.end()){
                return {mpp[more_needed] , i};
            }
            mpp[num]=i;
        }
        return {-1,-1};
        
    }
};


int main() {
    Solution solution;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = solution.twoSum(nums, target);
    
    cout << "Indices of the two numbers that add up to " << target << ": ";
    for (int index : result) {
        cout << index << " ";
    }
    cout << endl;

    return 0;
}
