class Solution {
public:
    int firstUniqChar(string s) {
//         for(int i=0;i<s.length();i++)
//         {
//             int count=0;
//             for(int j=0;j<s.length();j++)
//             {
//                 if(s[i]==s[j])
//                 {
// count++;}
//             }
//             if(count==1)
//             {
//                 return i;
//             }
//         }
//         return -1;
        
         unordered_map<int,int> mpp;
    for(int i=0;i<s.size();i++) {
        mpp[s[i]]++;
    }
    for(int i=0;i<s.size();i++) {
        if(mpp[s[i]]==1) return i;
    }
    return -1;
    }
};
