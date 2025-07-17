#include <vector>
#include <set>  
#include <algorithm>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        set<vector<int>> st;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                set<long long> hashnet;
                for (int k = j + 1; j < n; k++) {
                    long long sum = nums[i] + nums[j] +nums[k];
                    
                    int fourth = target - (sum);
                    if (hashnet.find(fourth) != hashnet.end()) {
                        vector<int> temp = {nums[i], nums[j],nums[k], fourth};
                        sort(temp.begin(), temp.end());
                        st.insert(temp);
                    }
                    hashnet.insert(nums[k]);
                }
            }
        }
        vector<vector<int>> ans(st.begin(), st.end());
        return ans;
    }

};

class solution_2point {
public:
    vector<vector<int>> fourSum_2pointer(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        
        for (int i = 0; i < n; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            
            for (int j = i + 1; j < n; j++) {
                if (j > i + 1 && nums[j] == nums[j - 1]) {
                    continue;
                }
                
                int k = j + 1;
                int l = n - 1;
                
                while (k < l) {
                    long long sum = (long long)nums[i] + nums[j] + nums[k] + nums[l];
                    
                    if (sum == target) {
                        ans.push_back({nums[i], nums[j], nums[k], nums[l]});
                        k++;
                        l--;
                        
                        while (k < l && nums[k] == nums[k - 1]) {
                            k++;
                        }
                        while (k < l && nums[l] == nums[l + 1]) {
                            l--;
                        }
                    } else if (sum < target) {
                        k++;
                        while (k < l && nums[k] == nums[k - 1]) {
                            k++;
                        }
                    } else {
                        l--;
                        while (k < l && nums[l] == nums[l + 1]) {
                            l--;
                        }
                    }
                }
            }
        }
        
        return ans;
    }
};


int main() {
    Solution sol;
    vector<int> nums = {1, 0, -1, 0, -2, 2};
    int target = 0;
    
    vector<vector<int>> result = sol.fourSum(nums, target);
    
    for (const auto& vec : result) {
        for (int val : vec) {
            cout << val << " ";
        }
        cout << endl;
    }
    
    solution_2point sol2;
    vector<vector<int>> result2 = sol2.fourSum_2pointer(nums, target);
    
    for (const auto& vec : result2) {
        for (int val : vec) {
            cout << val << " ";
        }
        cout << endl;
    }
    
    return 0;
}