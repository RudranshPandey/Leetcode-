#include<bits/stdc++.h>
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>>s;
        vector<vector<int>>ans;
        for(int i = 0; i<nums.size(); i++)
        {
            int j=i+1;
                for(int k =nums.size()-1; k>j;)
                {
                    int t=nums[i]+nums[j]+nums[k];
                    if(t == 0)
                     {  s.insert({nums[i], nums[j], nums[k]});
                        j++;
                        k--;
                     }
                    else if(t<0)
                        j++;
                    else 
                        k--;
                }
        }
        for(auto ta:s)
            ans.push_back(ta);
        return ans;
    }
};
