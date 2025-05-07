/*Problem Link
https://leetcode.com/problems/two-sum/description/
*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

class Solution {
  public:
      vector<int> twoSum(vector<int>& nums, int target) {
         map<int,int>mp;

         for(int i=0; i<nums.size(); i++){
          int complement = target - nums[i];
          if(mp.find(complement) != mp.end()){
            return {i,mp[complement]};
          }
          mp[nums[i]] = i;
         }
         return {};
      }
  };


int main()
{
 Solution obj;
 vector<int> nums = {2,7,11,15};
 int target = 9;
 vector<int> result = obj.twoSum(nums, target);
 for (int idx : result) {
  cout << idx << " ";
}
cout << endl;
return 0;
}