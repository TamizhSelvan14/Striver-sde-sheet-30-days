class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
        
        unordered_map<int,int>umap;
        for(int i=0;i<nums.size();i++)
            umap[nums[i]]=i;
        
        
        
        
        for(int i=0;i<operations.size();i++){
            
            if(umap.find(operations[i][0])!=umap.end()){
                
                int index=umap[operations[i][0]];
                nums[index]=operations[i][1];
                umap[operations[i][1]]=index;
                umap.erase(operations[i][0]);
                
                
                
            }
//             else if(umap.find(operations[i][1])!=umap.end()){
                
//                 int index=umap[operations[i][1]];
//                 nums[index]=operations[i][0];
//                 umap[operations[i][0]]=index;
//                 umap.erase(operations[i][1]);
//             }
            
            
        }
        
        
        
        return nums;
        
    }
};