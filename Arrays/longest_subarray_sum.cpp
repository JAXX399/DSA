#include <vector>
#include <iostream>   
#include <algorithm>
using namespace std;  

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int right=0;
        int left =0;
        long long sum=0;
        int n=nums.size();
        int maxlen=0;
        while(right < n){
            while(left<=right && sum > k){
                sum=sum-nums[left];
                left++;
            }
            if(sum==k){
                max(maxlen , right -left + 1);
            }
            right++;
            if(right<n){
                sum=sum+right;
            }

        }
        return maxlen;
        
    }
};