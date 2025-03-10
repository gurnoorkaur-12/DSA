// ques=>concatenation of array  // T.C=O(n) ;S.C=O(1)    
// Approach=>created a new array ans having all elements initially 0 .Then using a for loop and if else condition the elements of array nums was added twice to make the ans array;      
   class Solution {
    public:
        vector<int> getConcatenation(vector<int>& nums) {
            vector<int> ans(2*nums.size());
            for(int i=0;i<2*nums.size();i++){
    if(i<nums.size()){
    ans[i]=nums[i];
    }else{
        ans[i]=nums[i-nums.size()];
    }
            }
     return ans; }
   };                                     
   


//contains duplicate //leetcode 217
//T.C=O(n) S.C=O(1)
//approach=>sorted the array and compared adjacent elements
class Solution {
    public:
        bool containsDuplicate(vector<int>& nums) {
            sort(nums.begin(),nums.end());
                for(int i=1;i<nums.size();i++){
                    if(nums[i]==nums[i-1]){
                        return true;
                    }  
                } return false;
    
        }
    };