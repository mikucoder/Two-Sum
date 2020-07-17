class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:  #哈希表方法，找到一次即可输出
        hashmap={}
        result=list()
        i=0
        #采用两次哈希表，第一次是构建映射
        for i in range(len(nums)):
            hashmap[nums[i]]=i
        #第二次是检测另一个是否存在于哈希表中，且不能为原来的i从而避免重复
        for i in range(len(nums)):
            if hashmap.get(target-nums[i]) is not None:
                if hashmap.get(target-nums[i])!=i:
                    result.append(i)
                    result.append(hashmap[target-nums[i]])
                    return result
        return result