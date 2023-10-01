/**
Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.

You must not use any built-in exponent function or operator.

For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.
 

Example 1:

Input: x = 4
Output: 2
Explanation: The square root of 4 is 2, so we return 2.
**/

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        if(x==0 || x==1)
           {
               return x;
           }
        int l=0;
        int u=x;
        long long int ans=0;
        while(l<=u)
        {
            long long int mid=l+(u-l)/2;
            long long int sqr=mid*mid;
            if(sqr==x)
            {
               ans=mid;
                break;
            }
            else if(sqr>x)
            {
               u=mid-1;
            }
            else
            {
                 l=mid+1;
                 ans=mid;
            }
        }
        
        return ans;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout<< mySrt(n)<<endl;
    }

