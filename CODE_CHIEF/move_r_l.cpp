/*s = "LLRRR??"
Output
3

You are given a string s where each character is "L" meaning you moved one unit left, "R" meaning you moved one unit right, or "?" meaning either "L" or "R".

Given you are at position 0, return the maximum possible distance you could be from 0 by replacing "?" with "L" or "R".
*/

int solve(string s) {
    
    int left=0;
    int right=0;
    int q=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='L')
        {
            left++;
        }
        else if( s[i]=='R')
        {
            right++;
        }
        else{
            q++;
        }
    }
    if(left>right)
    {
        return (left+q)-right;
    }
    else
    {
    
        return (right+q)-left;
    }
    
}
