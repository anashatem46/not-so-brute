#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Template for LeetCode problem solving
class Solution {
    public:
        int lengthOfLastWord(string s) {
            
            int length =0 ;
            int i = s.size()-1;
            while (i>=0 && s[i] ==' '){
                i--;
            }
            
            while (i >=0 && s[i] != ' ')
            {
                length++;
                i--;

            }
            
            return length;



        }
    };

int main() {
    Solution solution;

    // Example input
    // vector<int> nums = {1, 2, 3, 4};
   
    // Example usage
     auto result = solution.lengthOfLastWord("Hello World");
    // auto result = solution.lengthOfLastWord("   fly me   to   the moon  ");
    // auto result = solution.lengthOfLastWord("luffy is still joyboy");
    cout << result << endl;

    return 0;
}
