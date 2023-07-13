class Solution
{
    public:
    bool isFrequencyUnique(int n, int arr[])
    {
        vector<int> totalFrequency(n + 1, 0);
        
        unordered_map<int,int> f;
        for(int i = 0; i < n; i++)
            ++f[arr[i]];
        
        for(auto it : f){
            totalFrequency[it.second]++;
        }
        
        for(int i = 0; i < n + 1; i++)
            if(totalFrequency[i] > 1)
                return 0;
                
        return 1;
    }
};
