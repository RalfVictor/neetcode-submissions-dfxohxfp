class Solution {
public:
    int maxArea(vector<int>& heights) {
        int area = 0;
        int i = 0;
        int j = heights.size()-1;
        while(i<j){
            area = max(min(heights[i],heights[j])*(j-i),area);
            if(heights[i]<=heights[j]) i++;
            else j--;
        }
        return area;
    }
};
