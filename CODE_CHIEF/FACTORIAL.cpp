/*The factorial of a number n is defined as n! = n * (n - 1) * (n - 2) * ... * 1.

Given a positive integer a, return n such that n! = a. If there is no integer n that is a factorial, then return -1.

Constraints

0 < a < 2 ** 31
Example 1
Input
a = 6
Output
3*/
int solve(int a) {
    int mul=1;
    for(int i=1;i<=a;i++)
    {
      mul*=i;
      if(mul==a)
      {
          return i;
      }
    }
    return -1;
}
