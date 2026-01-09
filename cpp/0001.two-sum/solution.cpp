// Created by alpblkba at 2026/01/07 22:17
// leetgo: 1.4.16
// https://leetcode.com/problems/two-sum/

#include <bits/stdc++.h>
#include "LC_IO.h"
using namespace std;

// @lc code=begin

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
    }
};

// @lc code=end

int main() {
	ios_base::sync_with_stdio(false);
	stringstream out_stream;

	vector<int> nums;
	LeetCodeIO::scan(cin, nums);
	int target;
	LeetCodeIO::scan(cin, target);

	Solution *obj = new Solution();
	auto res = obj->twoSum(nums, target);
	LeetCodeIO::print(out_stream, res);
	cout << "\noutput: " << out_stream.rdbuf() << endl;

	delete obj;
	return 0;
}
