#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Template for LeetCode problem solving
class Solution
{
public:
    int finalValueAfterOperations(vector<string> &operations)
    {
        int x = 0;
        for (auto i = 0; i < operations.size(); i++)
        {
            if (operations[i] == "X++" || operations[i] == "++X")
            {
                x++;
            }
            if (operations[i] == "X--" || operations[i] == "--X")
            {
                x--;
            }
        }
        return x;
    }
};

int main()
{
    Solution solution;

    // Example input
    vector<string> operations = {"--X", "X++", "X++"};

    // Example usage
    auto result = solution.finalValueAfterOperations(operations);
    cout << "Result: " << result << endl;

    return 0;
}
