/*Chef has recently introduced a feature, called WA Test Cases, which allows you to see the smallest test case that your WA code has failed in. For example, you can go to any relevant problem in Practice, make a submission which gets a WA verdict, and then click on the "Debug My Code" button to see the test case.

Your job now is to find that smallest test case that a particular submission fails on. That problem has NN test cases, and you are given the size of each of those test cases as S_1, S_2, \ldots, S_NS 
1
​
 ,S 
2
​
 ,…,S 
N
​
 . You are also given a binary string VV, which tells whether the submission has passed a particular test case or not. That is, if the i^{th}i 
th
  bit of VV is 11, that means that the submission has passed the i^{th}i 
th
  test case. If it is 00, then it has failed that test case. Your job is the output the size of the smallest test case where the submission has failed.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains a single integer, NN.
The second line contains NN integers - S_1, S_2, \ldots, S_NS 
1
​
 ,S 
2
​
 ,…,S 
N
​
 
The third line contains a binary string - VV.*/

#include <iostream>
#define INT_MAX
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int size;
	    cin>>size;
	    int array[size];
	    for(int i=0;i<size;i++)
	    {
	        cin>>array[i];
	    }
	    
	    string s;
	    cin>>s;
	    int minimum=1000;
	    for(int i=0;i<size;i++)
	    {
	        if(s[i]=='0')
	        {
	            if(minimum>array[i])
	            {
	                minimum=array[i];
	            }
	        }
	    }
	    cout<<minimum<<endl;
	}
	return 0;
}
