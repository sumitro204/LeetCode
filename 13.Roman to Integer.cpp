/*Problem Link
  https://leetcode.com/problems/roman-to-integer/description/
*/

class Solution {
  public:
      int romanToInt(string s) {
   map<char,int> value;
   value['I'] = 1;
   value['V'] = 5;
   value['X'] = 10;
   value['L'] = 50;
   value['C'] = 100;
   value['D'] = 500;
   value['M'] = 1000;
  
  int cnt = 0;
  int prev = 0;
  
  for(int i = s.length()-1; i>=0; i--){
    int curr = value[s[i]];
    if(curr < prev){
      cnt -= curr;
    }else{
     cnt += curr;
    }
    prev = curr;
  }
  return cnt;
  }

  };