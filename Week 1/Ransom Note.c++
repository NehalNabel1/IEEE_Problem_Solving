class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int>m;
        for(int i=0;i<magazine.size();i++){
            m[magazine[i]]++;
        }
         for(int j=0;j<ransomNote.size();j++){
             if(m.find(ransomNote[j]) != m.end() && m[ransomNote[j]] !=0){
                 
                  m[ransomNote[j]]--;
             }
             else{
                 return 0;
             }
         }

     return 1;
        
    }
};