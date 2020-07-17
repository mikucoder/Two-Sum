class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:  #暴力方法，找到一次即可输出
        for index in range(len(nums)):
            for j in range(index+1,len(nums)):
                if(nums[index]+nums[j]==target):
                    return [index,j]
        return []