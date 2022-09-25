class Solution {
public:
    int maximumWealth(vector<vector<int>>& arr) {
        
        	int sum =0; int large=INT_MIN;
    for(int i=0; i<arr.size(); i++)
    {
        for(int j=0; j<arr[i].size(); j++)
        {
            sum+=arr[i][j];
        }
        large=max(sum,large);
        sum=0;
    }
    return large;
    }
};
