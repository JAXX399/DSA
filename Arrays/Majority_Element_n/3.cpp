#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;


class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ls;
        map<int,int> mpp;
        int n = nums.size();
        int min= (int)(n/3)+1;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
            if(mpp[nums[i]] == min){
                ls.push_back(nums[i]);
                

            }
            if(ls.size()==2){
                break;
            }
        }
        sort(ls.begin(),ls.end());
        return ls;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {3, 2, 3, 2, 1, 1, 1};
    
    vector<int> result = sol.majorityElement(nums);
    
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;
    
    return 0;
}