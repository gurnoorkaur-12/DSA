//ques1=> leetcode2549 =>count distinct numbers on board
    //S.C=O(1);T.C=O(1)
    class Solution {
        public:
            int distinctIntegers(int n) {
                
                if (n==1){
                    return 1;
                }return n-1;
            }
        };
 //ques 2579 count total number of colored cells
//  S.C=O(1);T.C=O(n)   
        class Solution {
            public:
                long long coloredCells(int n) {
                    long long blueCells=0;
                    int num=1;
                for(int i=0;i<2*n-1;i++){
                blueCells+=num;
                if(i<n-1){
                    num+=2;
                }else{
                    num-=2;
                }
            
               }    return blueCells;
                }
            };           