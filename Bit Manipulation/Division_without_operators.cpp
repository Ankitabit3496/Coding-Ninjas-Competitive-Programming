/*Given a two integers say a and b. Find the quotient after dividing a by b without using multiplication, division and mod operator.

Example: 

Input : a = 10, b = 3
Output : 3

Input : a = 43, b = -8
Output :  -5 
*/

#include <bits/stdc++.h>
using namespace std;
int divide(int a, int b){
    int i = a; int j = b;
    int count = 0, flag = true;
     if(a < 0){
         a = -a;
     }
     if(b < 0){
         b = -b;
     }
     if(i < 0 || j < 0){
       flag = false;
     }
     while(a >= b){
       a = a - b;  
       count++;
     }
     if(i<0 && j>0 || i>0 && j<0){
         count = -count;
     }
     return count;
}
 
// Driver code
int main() {
  int a = 10, b = 3;
  cout << divide(a, b) << "\n";
 
  a = 43, b = -8;
  cout << divide(a, b);
 
  return 0;
}