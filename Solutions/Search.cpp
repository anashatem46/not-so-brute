#include <iostream>
#include <vector>
using namespace std;

// Template for LeetCode problem solving
class Solution
{
public:
    int Search(vector<int> &nums, int target)
    {
        int l = 0;
        int r = nums.size() - 1;
        while (l <= r)
        {
            int mid = l + ((r - l) / 2);

            if (target < nums[mid])
            {
                r = mid-1;
            }
            else if (target > nums[mid])
            {
                l = mid+1;
            }
            else
                return mid;
        }

        return -1;
    }
};

int main()
{
    Solution solution;

    // Example input
    vector<int> nums = {1, 2, 3, 4, 5};

    // Example usage
    int result = solution.Search(nums,4);
    cout << result << endl;

    return 0;
}
