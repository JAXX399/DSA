#include <iostream>
#include <vector>   
#include <set>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> st;
        for(int i=0;i<nums.size();i++){
            set<int> hashnet;
            for(int j=i+1;j<nums.size();j++){
                int third = -(nums[i]+nums[j]);
                if(hashnet.find(third) != hashnet.end()){
                    vector<int> temp={nums[i],nums[j],third};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);

                }
                hashnet.insert(nums[j]);

            }
        }
        vector<vector<int>> ans(st.begin(),st.end());
        return ans;
        
    }


    vector<vector<int>> threeSum_2pointer(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i=0;i<n;i++){
            if(i > 0 && nums[i]==nums[i-1]){
                continue;
            }
            int j=i+1;
            int k=n-1;

            while(k>j){
                int sum = nums[i]+nums[j]+nums[k];
                if(sum>0){
                    k--;

                }
                else if(sum<0){
                    j++;
                }
                else{

                    vector<int> temp={nums[i],nums[j],nums[k]};
                    ans.push_back(temp);
                    j++;
                    k--;
                    while(j < k && nums[j]==nums[j-1]){
                        j++;
                    }
                    while(j < k && nums[k]==nums[k+1]){
                        k--;
                    }
                }
            }
            
        }
        return ans;
        
    
};
};

int main() {
    Solution solution;
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    
    vector<vector<int>> result = solution.threeSum(nums);
    
    cout << "Triplets that sum to zero:" << endl;
    for (const auto& triplet : result) {
        cout << "[";
        for (int num : triplet) {
            cout << num << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}