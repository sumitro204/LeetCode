/*Problem Link
https://leetcode.com/problems/remove-duplicates-from-sorted-array/
*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      int i=0;
      for(int j=1; j<nums.size(); j++){
        if(nums[i] != nums[j]){
          nums[i+1] = nums[j];
          i++;
        }
      }
      return (i+1);
        
    }
};

int main()
{
 
return 0;
}