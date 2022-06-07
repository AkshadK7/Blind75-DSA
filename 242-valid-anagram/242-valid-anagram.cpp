class Solution {
public:
    string sortString(string &str)
        {
           sort(str.begin(), str.end());
           return str;
        }
    
    bool isAnagram(string s, string t) {
        
        string s1 = sortString(s);
        string s2 = sortString(t);
        
        if(s1==s2){
           return true;
        }
        else{
            return false;
        }
        
    }
        
};