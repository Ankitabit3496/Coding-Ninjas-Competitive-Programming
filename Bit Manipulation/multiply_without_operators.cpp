/*
Given an integer n, calculate the square of a number without using *, / and pow().
Examples : 
Input: n = 5
Output: 25

Input: 7
Output: 49

Input: n = 12
Output: 144
*/
// Square of a number using bitwise operators
#include <bits/stdc++.h>
using namespace std;
 
int sq(int n)
{
    if (n == 0)
        return 0;

    if (n < 0)
        n = -n;

    int suffix = n >> 1;

    if (n & 1){
        return ((square(suffix) << 2) + (suffix << 2) + 1);
    }
    else {
        return (square(suffix) << 2);
    }
}
 
// Driver Code
int main()
{
    // Function calls
    for (int n = 1; n <= 5; n++)
        cout << sq(n) << endl;
    return 0;
}