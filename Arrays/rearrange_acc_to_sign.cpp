#include <iostream>
#include <vector>       
#include <algorithm>    // For std::swap
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,0);
        int pos_index=0;
        int neg_index=1;
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                ans[pos_index]=nums[i];
                pos_index=pos_index + 2;
            }
            else{
                ans[neg_index]=nums[i];
                neg_index =neg_index+2;
            }
        }
        return ans;
    }
};


int main() {
    Solution solution;
    vector<int> nums = {3, -2, 1, -5, 4, -6, 7, 8};
    
    vector<int> result = solution.rearrangeArray(nums);
    
    cout << "Rearranged Array: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}