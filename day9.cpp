//leetcode 1 two sum  //q-1
//approach=>sorted the array and search for the target if target is found the original index of the elements is searched in the original nums vector
//T.C=O(n^2);S.C=O(1);
class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            vector<int>ans;
        vector<int> ogNums=nums;
        sort(nums.begin(),nums.end());
        int start=0;int end=nums.size()-1;
        while(start<end){
            if(nums[start]+nums[end]>target){
                end--;
            }
            else if(nums[start]+nums[end]<target){
                start++;
            }else{
                for(int i=0;i<ogNums.size();i++){
                    if(nums[start]==ogNums[i]){
                        ans.push_back(i);
                    }else if(nums[end]==ogNums[i]){
                        ans.push_back(i);
                    }
                }return ans;
            }
    
        }
    return ans;
        }
    };

//leetcode -75 sort colors//q-2
//approach=>count the frequency of one two and zero then replace each element in the array accordingly
// T.C=>O(n) ;
// S.C=>O(1)
class Solution {
    public:
        void sortColors(vector<int>& nums) {
            int countZero=0;
            int countOne=0;
            int countTwo=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                countZero++;
            }else if(nums[i]==1){
                countOne++;
            }else{
                countTwo++;
            }
        }
        for(int i=0;i<countZero;i++){
            nums[i]=0;
        }
        for(int i=0;i<countOne;i++){
            nums[i+countZero]=1;
        }
         for(int i=0;i<countTwo;i++){
            nums[i+countZero+countOne]=2;
        }    
        }
    };
//q-3--gfg
//T.C=O(n);S.C=O(1);
// approach=>find the pair of two numbers having max sum
class Solution {
    public:
      // Function to find pair with maximum sum
      int pairWithMaxSum(vector<int> &arr) {
       int ptr=1;
       int prePtr=0;
       int sum=INT_MIN;
       while(ptr<arr.size()){
           if(arr[ptr]+arr[prePtr]>sum){
               sum=arr[ptr]+arr[prePtr];
           }
           ptr++;
           prePtr++;
       }
       return sum;
          
          
      }
  };
  























