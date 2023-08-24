class Solution {
public:
    int lengthOfLastWord(string s) {
        int length=0,count=0;
        map<char,int>m;
        for(int i=0;i<s.size();i++){
            if(s[i]==' ' && i !=(s.size()) -1){
                if(isalpha(s[i+1])){
                   m[s[i]]=i;
                   count=i;
                }
               
            }
        }
        if(m.find(' ') != m.end()){
            for(int j= count;j<s.size() ;j++){
            if(s[j]!=' '){
               length++; 
            }

        }
        
        }
        else{
            for(int j= 0;j<s.size() ;j++){
            if(s[j]!=' '){
               length++; 
            }
            
        }
        }
        return length;
        
        
    }
};