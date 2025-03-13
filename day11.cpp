//leetcode pascal's triangle ques1
//S.C=O(1);T.C=O(n^2)
//aprroach=>for finding a particular row each index elements are given by element vector and are pushed in ans vector each time
class Solution {
    public:
        vector<vector<int>> generate(int numRows) {
            vector<vector<int>> ans={{1},{1,1}};
            if(numRows==0){
                return {};
            }if(numRows==1){
                return {{1}};
            }if(numRows==2){
                return ans;
            }
            
            for(int i=2;i<numRows;i++){
                vector<int>element;
                for(int j=0;j<i+1;j++){
                    if(j==0){
                        element.push_back(1);
                    }else if(j==i){
                        element.push_back(1);
                    }else{
                        element.push_back(ans[i-1][j-1]+ans[i-1][j]);
                    }
                }ans.push_back(element);
            }return ans;
        }
    };
    //leetcode rotate image //ques2
    //approach=>changed each element of matrix according to some relation with the elements of original matrix
    //T.C=O(N^2);S.C=O(1);
    class Solution {
        public:
            void rotate(vector<vector<int>>& matrix) {
                vector<vector<int>>ogMatrix=matrix;
                int n= matrix.size();
                for(int i=0;i<n;i++){
                    for(int j=0;j<n;j++){
                        matrix[j][n-i-1]=ogMatrix[i][j];  
                    }
                }
            }
        };