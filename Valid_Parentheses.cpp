/*Problem Link
  https://leetcode.com/problems/valid-parentheses/description/
*/
<<<<<<< HEAD

=======
>>>>>>> d8bfc05fcaaf378253f8cadb777ea53f868c244f
#include <bits/stdc++.h>
#define ll long long
using namespace std;

class Solution {
    public:
        bool isValid(string s) {
            stack<char>st;
            for(auto ch : s){
                if(ch == '(' || ch == '{' || ch == '['){
                    st.push(ch);
                }else{
                    if(st.empty()) return false;
                    char top = st.top();
                    if((ch ==')' && top != '(') ||
                       (ch == '}' && top != '{') ||
                       (ch == ']' && top != '[')){
                        return false;
                       }
                       st.pop();
                }
            }
            return st.empty();
        }
 };


<<<<<<< HEAD
// int main()
// {
//     string s; cin >> s;
//     Solution obj;
//     if(obj.isValid(s)){
//         cout<<"True"<<endl;
//     }else{
//         cout<<"False"<<endl;
//     }
 
// return 0;
// }
=======
/*int main()
{
    string s; cin >> s;
    Solution obj;
    if(obj.isValid(s)){
        cout<<"True"<<endl;
    }else{
        cout<<"False"<<endl;
    }
 
return 0;
}*/
>>>>>>> d8bfc05fcaaf378253f8cadb777ea53f868c244f
