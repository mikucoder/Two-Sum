class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {  /*暴力方法*/
        int index=0;
        vector<int> result;
        while(index<nums.size()) /*索引值的范围在数组范围内*/
        {
            for(int shift=1;(index+shift)<nums.size();shift++)
            {
                if(nums[index]+nums[index+shift]==target)
                {
                    result.push_back(index);
                    result.push_back(index+shift);
                    return result;
                }
            }
            index++;
        }
        return result;
    }
};