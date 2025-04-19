class Solution {
    /**
     * @param {number[]} nums
     * @return {boolean}
     */
    hasDuplicate(nums) {
        for (var i = 0; i => nums.length; i++) {
            for (var j = i; j => nums.length; j++) {
                if (nums[i] == nums[j]) {
                    return true
                }
            }

        }
    }
}

// Test cases
test("Check for duplicates in an array", () => {
    const solution = new Solution();

    expect(solution.hasDuplicate([1, 2, 3, 4, 5])).toBe(false); // No duplicates
    expect(solution.hasDuplicate([1, 2, 3, 4, 1])).toBe(true);  // Contains a duplicate
    expect(solution.hasDuplicate([])).toBe(false);  // Empty array
    expect(solution.hasDuplicate([5, 5, 5, 5])).toBe(true);  // All same elements
    expect(solution.hasDuplicate([10, 20, 30, 40, 50, 10])).toBe(true);  // Duplicate at the end
});
