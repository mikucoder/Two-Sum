class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {  /*哈希表方法*/
       vector<int> result;
       int i;
       unordered_map<int,int> hashmap; /*构建hash表*/
    
       //这里采用两次哈希表，第一次用于构造映射
       for(i=0;i<nums.size();i++){
           hashmap[nums[i]] = i;
       }
      
       //第二次用于判断另外一个是否存在于哈希表中
       for(i=0;i<nums.size();i++){
           if(hashmap[target-nums[i]]&&hashmap[target-nums[i]]!=i){ 
               //target-nums[i]存在于hash表中且不是原来的i，从而避免重复使用
            result.push_back(i);
            result.push_back(hashmap[target-nums[i]]);
            return result;
           }   
       }
       return result;
    }
};