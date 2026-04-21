class Solution {
public:
    int trap(vector<int>& a) {
    int n = a.size();
    vector<int> left(n,0);
    vector<int> right(n,0);
    left[0] = a[0];
    right[n-1] = a[n-1];
    for(int i=1;i<n;i++){
    left[i] = max(left[i-1],a[i]);
    }
    for(int j=n-2;j>=0;j--){
    right[j] = max(right[j+1],a[j]);
    }
    int ans = 0;
    for(int i=0;i<n;i++){
    ans+=min(left[i],right[i])-a[i];
    }
  return ans;
    }
};
