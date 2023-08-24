class Solution {
public:
    bool isAnagram(string s, string t) {
        map<int,int>m;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        if(s.size()==t.size()){

           for(int j=0;j<t.size();j++){
            if(m.find(t[j])!= m.end()){
                if(m[t[j]] == 0){
                    return false;
                }
                else{
                m[t[j]]--;}
                
            } 
            else{
                 return false; 
            }
        }
         return true; ;
        }
        else{
          return false; 
        }
       
       return false; 
    }
};