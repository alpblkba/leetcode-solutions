// Created by alpblkba at 2026/01/12 19:43
// leetgo: 1.4.16
// https://leetcode.com/problems/palindrome-number/

#include <bits/stdc++.h>
#include "LC_IO.h"
using namespace std;

// @lc code=begin

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        if (x >= 0 && x < 10) return true;

        int target = x;
        long long result = 0; // long long to prevent overflow

        while (x > 0) {
            int digit = x % 10;
            result = result * 10 + digit;
            x = x / 10;
        }

        return target == result;
    }
};

// @lc code=end

int main() {
	ios_base::sync_with_stdio(false);
	stringstream out_stream;

	int x;
	LeetCodeIO::scan(cin, x);

	Solution *obj = new Solution();
	auto res = obj->isPalindrome(x);
	LeetCodeIO::print(out_stream, res);
	cout << "\noutput: " << out_stream.rdbuf() << endl;

	delete obj;
	return 0;
}
