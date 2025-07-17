#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
      
        for (int j = 0; j < n; j++) {
                nums1[m+j]=nums2[j];

        }
        sort(nums1.begin(),nums1.end());
    }
};


int main() {
    Solution sol;
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};
    int m = 3; // Number of elements in nums1 before merging
    int n = 3; // Number of elements in nums2

    sol.merge(nums1, m, nums2, n);

    cout << "Merged Array: ";
    for (int num : nums1) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}