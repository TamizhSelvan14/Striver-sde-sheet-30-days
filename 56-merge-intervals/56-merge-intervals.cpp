class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        vector<vector<int>> ans; 
        if(intervals.size()==0)
            return ans;
        
        
        //sort the vector which maj=kes easier
        sort(intervals.begin(),intervals.end());
        
        //pushing the first pair to the temp
    vector<int> temp=intervals[0];    
    
        
        for(auto x:intervals){
            if(x[0]<=temp[1]){
                temp[1]=max(x[1],temp[1]);
            }else{
                ans.push_back(temp);
                temp=x;
            }
        }
        
        
        //push final value present
        ans.push_back(temp);
        
        
        
        return ans;
    }
};