class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int> mp1;
        for(auto& i:s1){
            mp1[i]++;
        }
        int n = mp1.size();
        for(int i=0;i<s2.size();i++){
            unordered_map<char,int> mp2;
            int cur = 0;
            for(int j=i;j<s2.size();j++){
                char c = s2[j];
                mp2[c]++;
                if (mp1[c] < mp2[c]) break;
                if (mp1[c] == mp2[c]) cur++;
                if (cur == n) return true;
            }
        }
        return false;
    }
};
