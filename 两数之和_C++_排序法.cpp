class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {  /*排序方法*/
        vector<int> result;
        vector<int> temp; /*用于排序，将排序后的元素位置与原来的数组进行对应*/
        temp = nums;
        sort(temp.begin(),temp.end()); /*将原来的数组按从小到大进行排序*/
        int n = nums.size();
        int i=0;
        int j=n-1;
        int k1,k2;
        while(i<j){
            if(temp[i]+temp[j]>target) j--;
            else if(temp[i]+temp[j]<target) i++;
            else break; /*不断缩进二者间距直到和为target*/
        }
        if(i<j){/*最后缩进的结果仍然满足i<j*/
            for(k1=0;k1<n;k1++)
            {
                if(nums[k1]==temp[i]){
                    result.push_back(k1);
                    break;
                }
            }
            for(k2=0;k2<n;k2++)
            {
                if(nums[k2]==temp[j]&&k2!=k1){
                    result.push_back(k2);
                    break;
                }
            }
            return result;
        }
        return result;
    }
};