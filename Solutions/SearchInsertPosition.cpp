#include <iostream>
#include <vector>
using namespace std;

// Template for LeetCode problem solving
class Solution {
    public:
        int searchInsert(vector<int>& nums, int target) {
           int p = 0 ;
            for (int i ; i<nums.size();i++)
            {
                if(nums[i] == target||nums[i+1]>target){
                    return i ; 
                }else{
                    p = i ;
                }
            }
            return (p+1) ; 
        
        }
    };
int main() {
    Solution solution;

    // Example input
    vector<int> nums = {1,3,5,6};
    int target = 7;
    // Example usage
    auto result = solution.searchInsert(nums,target);
    cout << "Result: " << result << endl;

    return 0;
}
