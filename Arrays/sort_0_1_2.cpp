#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;



// Approach: Counting Sort// Time Complexity: O(2n)
// Space Complexity: O(1) (in-place sorting)
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int cnt0 = 0;
        int cnt1 = 0;
        int cnt2 = 0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                cnt0++;

            }
            else if(nums[i]==1){
                cnt1++;
            }
            else{
                cnt2++;
            }

        }
        for(int i=0; i < cnt0;i++){
            nums[i]=0;
        }
        for(int i=cnt0 ; i < cnt0+cnt1; i++){
            nums[i]=1;
        }
        for (int i=cnt1+cnt0 ; i<cnt0+cnt1+cnt2 ;i++){
            nums[i]=2;
        }
        
    }
    // Alternative Approach: Dutch National Flag Problem
    void sortColors_dutch(vector<int>& nums) {
        int low=0;
        int mid=0;
        int high=nums.size()-1;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[low],nums[mid]);
                low++;
                mid++;

            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                swap(nums[mid],nums[high]);
                high--;
                
            }
        }
        
    }
};


int main() {
    Solution solution;
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    
    solution.sortColors(nums);
    
    cout << "Sorted array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    // Alternatively, you can use the Dutch National Flag approach
    // solution.sortColors_dutch(nums);
    cout << "Sorted array using Dutch National Flag: ";
    for (int num : nums) {
        cout << num << " ";
    }

    return 0;
}