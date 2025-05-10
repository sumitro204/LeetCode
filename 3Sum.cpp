/*Problem Link
https://leetcode.com/problems/3sum/description/
*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

class Solution {
  public:
      vector<vector<int>> threeSum(vector<int>& nums) {
          set<vector<int>> st;
          sort(nums.begin(), nums.end());

          if(nums.size() == 0 || nums.size()<3) return {};

          //set the first element
          for(int i=0; i<nums.size()-2; i++){
            int Left = i+1;
            int Right = nums.size()-1;

               // find next two element
              while (Left < Right)
              {
                int sum = nums[i] + nums[Left] + nums[Right];
                if(sum == 0){
                  st.insert({nums[i],nums[Left],nums[Right]});
                  Left++;
                  Right--;
                }else if(sum > 0){
                  Right--;
                }else{
                  Left++;
                }
              }
             
          }
           // conver set to vector
           return vector<vector<int>>(st.begin(),st.end());
      }
  };
  int main() {
    Solution obj;
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> result = obj.threeSum(nums);

    for (auto triplet : result) {
        for (int num : triplet)
            cout << num << " ";
        cout << endl;
    }

    return 0;
}