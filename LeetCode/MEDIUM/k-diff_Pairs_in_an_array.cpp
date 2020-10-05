class Solution {
public:
    int findPairs(vector<int>& arr, int k) {
        int n=arr.size();
        int ans=0;
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
        if(m.find(arr[i])==m.end())m[arr[i]]=0;
        m[arr[i]]++;
        if(k==0){
            if(m[arr[i]]==2)ans++;
        }
            else if(m[arr[i]]==1){
                if(m.find((arr[i]-k))!=m.end())ans++;
                if(m.find((arr[i])+k)!=m.end())ans++;
            }
        
        }
        return ans;
    }
};
