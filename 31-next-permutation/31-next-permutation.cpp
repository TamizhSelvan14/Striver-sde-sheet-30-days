class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
    
        
       int k=0;
        
        //find if the arr[k]<arr[k+1]then break traverse from last
    for(k=n-2;k>=0;k--){
        if(nums[k]<nums[k+1])
            break;
    }
        
        
    if(k<0){
        reverse(nums.begin(),nums.end());
    }else{
        
        int l;
        
        for( l=n-1;l>k;l--){
            
            if(nums[l]>nums[k])
                break;
            
        }
        
        
        swap(nums[k],nums[l]);
        reverse(nums.begin()+k+1,nums.end());
        
        
        
        
        
    }
        
        
        
        
        
    }
    
};