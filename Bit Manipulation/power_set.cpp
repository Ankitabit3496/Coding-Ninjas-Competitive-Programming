/*
Power Set 
Easy Accuracy: 48.41% Submissions: 10520 Points: 2
Given a string S find all possible subsequences of the string in lexicographically-sorted order.
Example 1:
Input : str = "abc"
Output: a ab abc ac b bc c
Explanation : There are 7 substrings that 
can be formed from abc.
Example 2:

Input: str = "aa"
Output: a a aa
Explanation : There are 3 substrings that 
can be formed from aa.
Your Task:
You don't need to read ot print anything. Your task is to complete the function AllPossibleStrings() which takes S as input parameter and returns a list of all possible substrings(non-empty) that can be formed from S in lexicographically-sorted order.

Expected Time Complexity: O(2n) where n is the length of the string
Expected Space Complexity : O(n * 2n)
 
Constraints: 
1 <= Length of string <= 16
*/
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
     
public:
    vector<string> Set(string set, int set_size)
    {
        unsigned int pow_set_size = pow(2, set_size);
        int counter, j;
        string v;
        vector<string>w;
        
        for(counter = 1; counter < pow_set_size; counter++){
            string v;
            for(j = 0; j < set_size; j++){
                if(counter & (1 << j))
                    v += set[j];
            }
            w.push_back(v);
        }
        return w;
    }

	vector<string> AllPossibleStrings(string s){
	    int n  = s.length();
	    vector<string>v = Set(s, n);
	    sort(v.begin(), v.end());
	    return v;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}  // } Driver Code Ends