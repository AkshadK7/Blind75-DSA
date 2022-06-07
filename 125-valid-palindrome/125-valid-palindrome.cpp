class Solution {
public:
    
    
    bool isPalindrome(string s) {
        
       vector<char> s1;
       vector<char> s2;
        
       for(int i=0; i<=s.size(); i++){
            if(s[i]>='a' && s[i]<='z')
            {
                s1.push_back(s[i]);
            }
           
            else if(s[i]>='A' && s[i]<='Z')
            {
                s1.push_back(tolower(s[i]));
            }
           
            else if(s[i]>='0' && s[i]<='9')
            {
                s1.push_back(tolower(s[i]));
            }
        }
        
       
        for(int i=s1.size()-1; i>=0; i--){
            s2.push_back(s1[i]);
        }
        
        
        return s1==s2;
        
    }
};