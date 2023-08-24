class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>v;
         int j=0;
        int size=nums.size();
        for(int i=0;i<size*2;i++){
            v.push_back(nums[j]);
            
            if(j==(nums.size())-1 ){
                j=0;
            }
            else{
                 j++;
            }
           

           
            
        }
        
        return v;
    }
};