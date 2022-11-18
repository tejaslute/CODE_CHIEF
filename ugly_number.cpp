//An ugly number is a positive integer whose prime factors are limited to 2, 3, and 5.

//Given an integer n, return true if n is an ugly number.

 class Solution {
public:
    bool isUgly(int n) {
        if(n<=0)
            return false;
        n = abs(n);
        int i=0;
        
        while(n>0)
        {
            if(n==1)
                break;
            if(n%2==0)
            {
                n=n/2;
                        }
            else if(n%3==0)
            {
                n=n/3;
                
            }
            else if(n%5==0)
            {
                n=n/5;
            
            }
            else{
                return false;
            }
            
           
        }
        return true;
    }
};
