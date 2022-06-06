class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size(); //rows
        int m=matrix[0].size(); //cols
        
        
        vector<int> dummyRow(n,-1);
        
        vector<int> dummyCol(m,-1);
        
        
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                
                if(matrix[i][j]==0){
                    
//                    int index=i-1;
//                     //upwards
//                     while(index>=0){
//                         if(matrix[index][j]!=0){
//                         matrix[index][j]=-1;    
//                         }
//                         index--;
//                     }
                    
                    
//                     index=i+1;
//                     //downwards
//                     while(index<n){
//                         if(matrix[index][j]!=0){
//                         matrix[index][j]=-1;    
//                         }
//                         index++;
//                     }
                    
//                      index=j-1;
//                     //downwards
//                     while(index>=0){
//                         if(matrix[i][index]!=0){
//                         matrix[j][index]=-1;    
//                         }
//                         index--;
//                     }
                    
//                      index=j+1;
//                     //downwards
//                     while(index<m){
//                         if(matrix[i][index]!=0){
//                         matrix[i][index]=-1;    
//                         }
//                         index++;
//                     }
                    
                    dummyRow[i]=0;
                    dummyCol[j]=0;
                            
                    
                    
                }
                
                
            }
            
        }
        
        
        
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                // cout<<matrix[i][j]<<" ";
                if(dummyRow[i]==0 or dummyCol[j]==0)
                    matrix[i][j]=0;
                
                
            }
            // cout<<endl;
        }
        
        // return matrix;
    }
};