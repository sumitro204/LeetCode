/* Problem Link
https://leetcode.com/problems/longest-valid-parentheses/
*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

class Solution {
    public:
        int longestValidParentheses(string s) {
            stack<int> st;
            int Max = 0;
            st.push(-1);
         for(int i=0; i<s.length(); i++){
            if(s[i] == '('){
                st.push(i);
            }else{
                st.pop();
                if(st.empty()){
                    st.push(i);
                }
                Max = max(Max, i-st.top());
            }
         }
         return Max;
        }
};

int main()
{
    string s;
    cin >> s;
    Solution obj;
    cout << obj.longestValidParentheses(s) << endl;
    return 0;
}