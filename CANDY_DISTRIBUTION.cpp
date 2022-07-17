// CAN DY_DISTRIBUTION.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


/*
135. Candy
Hard

2974

260

Add to List

Share
There are n children standing in a line.Each child is assigned a rating value given in the integer array ratings.

You are giving candies to these children subjected to the following requirements :

Each child must have at least one candy.
Children with a higher rating get more candies than their neighbors.
Return the minimum number of candies you need to have to distribute the candies to the children.



Example 1:

Input: ratings = [1, 0, 2]
Output : 5
Explanation : You can allocate to the first, second and third child with 2, 1, 2 candies respectively.
Example 2 :

	Input : ratings = [1, 2, 2]
	Output : 4
	Explanation : You can allocate to the first, second and third child with 1, 2, 1 candies respectively.
	The third child gets 1 candy because it satisfies the above two conditions.
	*/

class Solution {
public:
    int candy(vector<int>& a) {
        int n = a.size();
        vector<int> l(n, 1);
        vector<int>   r(n, 1);
        int ans = 0;
        // MOVING FROM LEFT SIDE   
        for (int i = 1; i < n; i++)
        {
            if (a[i] > a[i - 1])
            {
                l[i] = l[i - 1] + 1;
            }
        }

        // MOVING FROM RIGHT SIDE AND CALCULATE THE ANS
        for (int i = n - 2; i >= 0; i--)
        {
            if (a[i] > a[i + 1])
            {
                r[i] = r[i + 1] + 1;

            }

        }

        for (int i = 0; i < n; i++)
        {
            ans += max(l[i], r[i]);
        }
        return ans;
    }
};
