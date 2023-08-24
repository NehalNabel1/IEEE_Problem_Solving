class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int count=0;
        map<char,int>m;
        for(int i=0;i<text.size();i++){
            if(text[i]=='b' || text[i]=='a'|| text[i]=='l'||text[i]=='o' ||text[i]=='n'){
              m[text[i]]++;
            }
            
        }

        for(int j=0;j<text.size();j++){
            if(m.find('b') !=m.end()  && m['b'] !=0){
                 m['b'] --;
                 if(m.find('a') !=m.end()  && m['a'] !=0){
                     m['a'] --;
                     if(m.find('l') !=m.end()  && m['l'] >=2){
                         m['l']-=2;
                         if(m.find('o') !=m.end()  && m['o'] >=2){
                             m['o']-=2;
                             if(m.find('n') !=m.end()  && m['n'] !=0){
                                 m['n']--;
                                 count++;
                             }
                             else{
                                 break;
                             }


                         }
                         else{
                             break;
                         }


                     }
                     else{
                         break;
                     }
                 }
                 else{
                     break;
                 }

            }
            else{
                break;
            }
        }
     return count;
        
    }
};