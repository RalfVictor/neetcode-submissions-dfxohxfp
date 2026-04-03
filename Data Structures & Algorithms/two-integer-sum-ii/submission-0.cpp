class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        int i = 0;
        int j = num.size()-1;
        int sum = 0;
        while(i<j){
            sum = num[j]+num[i];
            if(sum>target) j--;
            else if(sum<target) i++;
            else return {i+1,j+1};
        }
        return {};
    }
};
