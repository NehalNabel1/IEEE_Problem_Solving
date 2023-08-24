class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int max=0;
        vector<int>v;
        map<int,int>m;

        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
            if(nums[i] >max){
                max=nums[i];
            }
        }
        for(int j=1;j<=nums.size();j++){
            if(m.find(j) ==m.end()){
                v.push_back(j);

            }
        }

        return v;
        
    }
};