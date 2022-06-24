//You are given an array target of n integers.From a starting array arr consisting of n 1's, you may perform the following procedure :
//
//let x be the sum of all elements currently in your array.
//choose index i, such that 0 <= i < nand set the value of arr at index i to x.
//	You may repeat this procedure as many times as needed.
//	Return true if it is possible to construct the target array from arr, otherwise, return false.
//
//
//
//	Example 1:
//
//Input: target = [9, 3, 5]
//Output : true
//Explanation : Start with arr = [1, 1, 1]
//[1, 1, 1], sum = 3 choose index 1
//[1, 3, 1], sum = 5 choose index 2
//[1, 3, 5], sum = 9 choose index 0
//[9, 3, 5] Done
//Example 2 :
//
//	Input : target = [1, 1, 1, 2]
//	Output : false
//	Explanation : Impossible to create target array from[1, 1, 1, 1].

class Solution {
public:
    bool isPossible(vector<int>& target) {
        priority_queue<int> pq;
        unsigned int sum = 0;
        for (int x : target) {
            sum += x, pq.push(x);
        }
        while (pq.top() != 1) {
            int x = pq.top();
            pq.pop();
            sum -= x;
            if (x <= sum || sum < 1) return false;
            x %= sum;
            sum += x;
            pq.push(x ? x : sum);
        }
        return true;
    }
};