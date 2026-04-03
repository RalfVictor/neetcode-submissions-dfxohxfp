class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        for(auto& it:operations){
            if(it=="+"){
                int x = st.top();
                st.pop();
                int y = st.top();
                st.push(x);
                st.push(x+y);
            }
            else if(it=="D"){
                int x = st.top();
                st.push(x*2);
            }
            else if(it=="C"){
                st.pop();
            }
            else{
                st.push(stoi(it));
            }
        }
        int ans = 0;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};