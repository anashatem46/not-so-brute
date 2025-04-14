#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

// Template for LeetCode problem solving
class Solution
{
public:
    // Replace the function signature and implementation with the specific problem's requirements
    bool hasDuplicate(std::vector<int> &nums)
    {
        
 
        
        sort(nums.begin(), nums.end());
        for (auto it = nums.begin(); it != nums.end(); it++){
       
            if (*it == *(it + 1)) 
            {

                return true;
            }
        }
        return false;
    }
};

int main()
{
    Solution solution0;

    // Example input
    vector<int> nums = {1,2,2,34,5,6,7,8};
    // Call the function and print the result
    // solution0.hasDuplicate(nums);

    bool result = solution0.hasDuplicate(nums);
    cout << (result ? "True" : "False") << endl;

    return 0;
}