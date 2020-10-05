bool comp(const vector<int>&v1,const vector<int>v2){
    return v1[0]<v2[0];
}
class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end(),comp);
        stack<vector<int>>st;
        st.push(arr[0]);
        for(int i=1;i<n;i++){
            vector<int>top=st.top();
            if(arr[i][0]<=top[0] && top[1]<=arr[i][1]){
                st.pop();
                st.push(arr[i]);
            }
            else if(top[0]<=arr[i][0] && arr[i][1]<=top[1])continue;
            else st.push(arr[i]);
            
            
        }
        return st.size();
        
    }
};