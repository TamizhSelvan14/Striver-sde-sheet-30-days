class Solution {
public:
    vector<vector<int>> generate(int num) {
        
        
                 vector<vector<int>> arr(num, vector<int> (num, 0));
        
        
        
        //first rows and last values as 1's
        for(int i=0;i<num;i++){
        
            arr[i].resize(i+1);
            arr[i][0]=1;
            arr[i][i]=1;

        }
        if(num<=2)
            return arr;
        for(int i=2;i<num;i++){
            for(int j=1;j<i;j++){
                arr[i][j]= (arr[i-1][j-1]) + (arr[i-1][j]);
            }
        }
        
        return arr;
    }
};