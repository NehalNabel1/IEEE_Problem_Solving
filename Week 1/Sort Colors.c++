class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(int j=0;j<nums.size();j++){

            if(m.find(0) !=m.end()  && m[0]!=0){
                nums[j]=0;
                m[0]--;

            }
            else if(m.find(1) !=m.end()  && m[1]!=0){
                nums[j]=1;
                m[1]--;

            }
            else if(m.find(2) !=m.end()  && m[2]!=0){
                nums[j]=2;
                m[2]--;

            }
        }
        
    }
};