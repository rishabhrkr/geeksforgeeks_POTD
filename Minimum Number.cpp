class Solution{
public:
    int minimumNumber(int n,vector<int> &arr){
        int ans=arr[0];
        for(int i=1;i<n;i++){
            ans=__gcd(ans,arr[i]);
        }
        return ans;
    }
};
