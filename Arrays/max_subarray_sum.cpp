#include <iostream>
#include <vector>

#include <climits> // For INT_MIN
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int maxi = INT_MIN;
        int ans_start=-1;
        int ans_end=-1;
        int sum=0;
        int start=0;
        for(int i=0 ; i< n;i++){

            if(sum==0){
                int start = i;
            }
            sum = sum + nums[i];
            if(sum > maxi){
                maxi =  sum;
                ans_start=start;
                ans_end=i;

            }

            if(sum < 0){
                sum=0;
            }
        }
        return maxi;

        
    }
};

int main() {
    Solution solution;
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    
    int result = solution.maxSubArray(nums);
    cout << "Maximum Subarray Sum: " << result << endl;

    return 0;
}