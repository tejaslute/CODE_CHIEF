//1647. Minimum Deletions to Make Character Frequencies Unique
//Medium
//
//1573
//
//33
//
//Add to List
//
//Share
//A string s is called good if there are no two different characters in s that have the same frequency.
//
//Given a string s, return the minimum number of characters you need to delete to make s good.
//
//The frequency of a character in a string is the number of times it appears in the string.For example, in the string "aab", the frequency of 'a' is 2, while the frequency of 'b' is 1.
//
//
//
//Example 1:
//
//Input: s = "aab"
//Output : 0
//Explanation : s is already good.
//Example 2 :
//
//	Input : s = "aaabbbcc"
//	Output : 2
//	Explanation : You can delete two 'b's resulting in the good string "aaabcc".
//	Another way it to delete one 'b' and one 'c' resulting in the good string "aaabbc".

class Solution {
public:
    int minDeletions(string s) {
        unordered_map<int, int>charcnt;
        unordered_map<int, int>uniquefreq;
        int count = 0;

        for (int i = 0; i < s.size(); i++)
        {
            charcnt[s[i] - 'a']++;
        }

        for (auto& it : charcnt)
        {
            int x = it.second;
            if (uniquefreq[x] != 0)
            {
                while (x > 0 && uniquefreq[x] != 0)
                {
                    x--;
                    count++;
                }
            }
            if (x > 0)
            {
                uniquefreq[x]++;
            }
        }

        return count;
    }
};