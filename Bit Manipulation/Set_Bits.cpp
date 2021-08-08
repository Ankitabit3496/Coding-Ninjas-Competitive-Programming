/*Your task is to complete the function setBits() which takes an Integer N and returns the count of number of set bits.

Expected Time Complexity: O(LogN)
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ N ≤ 109
*/

// { Driver Code Starts.
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int setBits(int N) {
        int count = 0, rem = 0;
        while(N != 1){
            rem = N%2;
            N = N/2;
            if(rem == 1){
                count++;
            }
        }
        count++;
        return count;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        Solution ob;
        int cnt = ob.setBits(N);
        cout << cnt << endl;
    }
    return 0;
}
  // } Driver Code Ends