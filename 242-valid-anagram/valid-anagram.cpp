class Solution {
public:
    bool isAnagram(string s, string t) {
    if(s.size() != t.size())
        return false;
     int size= s.size();

        for(int i=0;i<size;i++){
            for(int j=0;j<size;j++)
                if(s[i]==t[j]){
                    t[j]=0;
                    j=0;
                    break;}
        }
        for(int k=0;k<size;k++){
            if(t[k]!=0)
                return false;
            
        }

                return true;

    }
};