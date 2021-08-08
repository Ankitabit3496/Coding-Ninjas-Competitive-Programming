/*Given an array A containing 2*N+2 positive numbers, out of which 2*N numbers exist in pairs whereas the other two number occur exactly once and are distinct. Find the other two numbers.
Example 1:
Input: 
N = 2
arr[] = {1, 2, 3, 2, 1, 4}
Output:
3 4 
Explanation:
3 and 4 occur exactly once.
Example 2:

Input:
N = 1
arr[] = {2, 1, 3, 2}
Output:
1 3
Explanation:
1 3 occur exactly once.

Your Task:
You do not need to read or print anything. Your task is to complete the function singleNumber() which takes the array as input parameter and returns a list of two numbers which occur exactly once in the array. The list must be in ascending order.


Expected Time Complexity: O(N)
Expected Space Complexity: O(1)


Constraints:
1 <= length of array <= 106 
1 <= Elements in array <= 5 * 106
*/

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
public:
    //nlogn -map
    vector<int> singleNumber(vector<int> nums) {
        unordered_map<int, int> mp;
        vector<int>v;
        
        for (int i = 0; i<nums.size(); i++) {
            mp[nums[i]]++;
        }

        for (int i=0; i<nums.size(); i++) {
            if (mp[nums[i]] == 1) {
               v.push_back(nums[i]);
            }
        }
        if(v[1] < v[0]){
            swap(v[0], v[1]);
        }
        return v;
    }
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}  // } Driver Code Ends