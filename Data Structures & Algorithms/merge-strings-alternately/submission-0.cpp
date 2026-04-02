class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = 0;
        string s = "";
        cout<<word1.size()<<" "<<word2.size();
        while(i<word1.size() && i<word2.size()){
            s+=word1[i];
            s+=word2[i];
            i++;
        }
        while(i<word1.size()){
            s+=word1[i];
            i++;
        }
        while(i<word2.size()){
            s+=word2[i];
            i++;
        }
        return s;
    }
};