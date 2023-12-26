/***************************************************************
* Author: Leonardo Marques
* leetcode: Easy
***************************************************************/

/* RunTime = 3ms
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        for(int i=0;; ++i){
            int x= nums[i];
            int y= target - x;
            if(m.count(y)) {
                return {m[y], i};
            }
            m[x] =i;
        }
    }
};
*/

// RunTime = 307 ms
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); i++) 
        {
            for(int j = i+1; j < nums.size(); j++) 
            {
                if(nums[i] + nums[j] == target) 
                {
                    return {i,j};
                }
            }
        }
        return {};
    }
};