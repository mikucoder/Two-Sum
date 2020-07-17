class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:  #排序方法，找到一次即可输出
        result=list()
        temp = nums.copy()
        temp.sort() #从小到大进行排序
        n = len(nums)
        i=0
        j=n-1
        while i<j:
            if temp[i]+temp[j]>target:
                j-=1
            elif temp[i]+temp[j]<target:
                i+=1
            else:
                break
        if i<j:
            for k1 in range(n):
                if nums[k1]==temp[i]:
                    result.append(k1)
                    break
            for k2 in range(n):
                if (nums[k2]==temp[j] and k2!=k1):
                    result.append(k2)
                    break
            return result
        return result