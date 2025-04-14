class Solution {
    /**
  * @param {string} s
  * @param {string} t
  * @return {boolean}
  */
    isAnagram = function (s, t) {
        var c = 0
        for (var i = 0; i < s.length; i){
            for (var j = 0; j < t.length; j++) {
                if (s[i] == t[j]) {
                    c++
                }
            }
        }

    };
}
// Test cases
console.log(isAnagram("anagram", "nagaram")); // expected output: true
console.log(isAnagram("rat", "car"));         // expected output: false
