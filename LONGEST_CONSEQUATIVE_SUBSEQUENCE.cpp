//128. Longest Consecutive Sequence
//Medium
//
//10419
//
//464
//
//Add to List
//
//Share
//Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.
//
//You must write an algorithm that runs in O(n) time.
//
//
//
//Example 1:
//
//Input: nums = [100, 4, 200, 1, 3, 2]
//Output : 4
//Explanation : The longest consecutive elements sequence is[1, 2, 3, 4].Therefore its length is 4.
//Example 2 :
//
//	Input : nums = [0, 3, 7, 2, 5, 8, 4, 6, 0, 1]
//	Output : 9

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() < 1) //Edge case of no elements
            return 0;
        //Sort first then check if the numbers are consecutive
        sort(nums.begin(), nums.end());

        int lmax = 1, gmax = 1;
        for (int i = 1; i < nums.size(); i++)
        {
            //Skip duplicates
            if (nums[i] == nums[i - 1])
                continue;
            lmax = (nums[i] == nums[i - 1] + 1) ? lmax + 1 : 1; //Check if incremental and if not, reset
            gmax = max(gmax, lmax);
        }
        return gmax;
    }
};