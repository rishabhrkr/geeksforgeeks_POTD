class Solution {
  public:
    long long solve(int N, vector<int> &A, vector<int> &B) {
        // code here
          sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        
        vector<int>Aodd,Aeven,Bodd,Beven;
        long long sA=0,sB=0;
        
        for(int i=0;i<N;i++)
        {
            
            sA+=A[i];
            sB+=B[i];
            
            if(A[i]%2==0) Aeven.push_back(A[i]);
            else  Aodd.push_back(A[i]);
            
            if(B[i]%2==0) Beven.push_back(B[i]);
            else  Bodd.push_back(B[i]);
        }
        
        
        // possible or not
        if(sA!=sB || Aeven.size()!=Beven.size() || Aodd.size()!=Bodd.size()) 
         return -1;
        
        // cal ans
        long long ans=0;
        for(int i=0;i<Aodd.size();i++)
             ans+=abs(Aodd[i]-Bodd[i]);
             
        for(int i=0;i<Aeven.size();i++)
            ans+=abs(Aeven[i]-Beven[i]);
            
        return ans/4;

    }
};
