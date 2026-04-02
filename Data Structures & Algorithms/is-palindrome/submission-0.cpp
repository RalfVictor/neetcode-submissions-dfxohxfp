class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.length()-1;
        while(i<j){
            if(!iswalnum(s[i])) {cout<<s[i]<<"-";i++;continue;}
            if(!iswalnum(s[j])) {cout<<s[j]<<"-";j--;continue;}
            if(tolower(s[i])!=tolower(s[j])) return false;
            i++;
            j--;
        }
        return true;
    }
};
