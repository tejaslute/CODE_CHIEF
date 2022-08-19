//Given a list of integers nums, return whether the largest number is bigger than the second-largest number by more than two times.
bool solve(vector<int>& nums) {
    priority_queue<int>pq;
    for(int i=0;i<nums.size();i++)
    {
        pq.push(nums[i]);
    }
int h=pq.top();
pq.pop();
    if(2*(pq.top())<h)
    {
        return true;
    }
    return false;
}
