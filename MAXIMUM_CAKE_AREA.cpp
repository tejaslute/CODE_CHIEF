//1465. Maximum Area of a Piece of Cake After Horizontal and Vertical Cuts
//Medium
//
//1741
//
//281
//
//Add to List
//
//Share
//You are given a rectangular cake of size h x w and two arrays of integers horizontalCuts and verticalCuts where:
//
//horizontalCuts[i] is the distance from the top of the rectangular cake to the ith horizontal cut and similarly, and
//verticalCuts[j] is the distance from the left of the rectangular cake to the jth vertical cut.
//Return the maximum area of a piece of cake after you cut at each horizontaland vertical position provided in the arrays horizontalCutsand verticalCuts.Since the answer can be a large number, return this modulo 109 + 7.
//
//
//
//Example 1:
//
//
//Input: h = 5, w = 4, horizontalCuts = [1, 2, 4], verticalCuts = [1, 3]
//Output : 4
//Explanation : The figure above represents the given rectangular cake.Red lines are the horizontal and vertical cuts.After you cut the cake, the green piece of cake has the maximum area.
//Example 2 :
//
//
//	Input : h = 5, w = 4, horizontalCuts = [3, 1], verticalCuts = [1]
//	Output : 6
//	Explanation : The figure above represents the given rectangular cake.Red lines are the horizontal and vertical cuts.After you cut the cake, the green and yellow pieces of cake have the maximum area.
//	Example 3 :
//
//	Input : h = 5, w = 4, horizontalCuts = [3], verticalCuts = [3]
//	Output : 9

class Solution {
public:
    int maxArea(int h, int w, vector<int>& hC, vector<int>& vC) {
        hC.push_back(h);
        sort(hC.begin(), hC.end());
        int maxh = hC[0];
        for (int i = 1; i < hC.size(); i++) {
            maxh = max(maxh, hC[i] - hC[i - 1]);
        }

        vC.push_back(w);
        sort(vC.begin(), vC.end());
        int maxv = vC[0];
        for (int i = 1; i < vC.size(); i++) {
            maxv = max(maxv, vC[i] - vC[i - 1]);
        }

        return (1LL * maxh * maxv) % 1000000007; //1LL used to make the product long long or integer sign overflow will occur.
    }
};