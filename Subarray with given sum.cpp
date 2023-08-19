class Solution
{
    public:
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        int i=0,j=0;
        int sum=arr[0];
        if(s==0){
            return {-1};
        }
        while(j<n){
            if(sum==s){
                return {i+1,j+1};
            }
            else if(sum>s){
                sum-=arr[i];
                i++;
            }
            else{
                j++;
                if(j<n){
                    sum+=arr[j];
                }
            }
        }
        return {-1};
    }
};
