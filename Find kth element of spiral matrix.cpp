class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int a[MAX][MAX],int n,int m,int k)
    {
 		int dx[] = { 0, 1, 0, -1};
 		int dy[] = { 1, 0, -1, 0}; 
 		
 		int cur = 0;
 		int x, y;
 		x = y = 0;
 		
 		vector<vector<bool>> vis(n, vector<bool> (m, 0));
 		
 		auto valid = [&](int xx, int yy) -> bool {
 		    if(xx < 0 or xx >= n or yy < 0 or yy >= m)
 		        return 0;
 		    
 		    return !vis[xx][yy];
 		};
 		
 		for(int i = 1; i <= n * m; i++){
 		    vis[x][y] = 1;
 		    
 		    if(i == k)
 		        return a[x][y];
 		       
 		    if(!valid(x + dx[cur], y + dy[cur]))
 		        cur = (cur + 1) % 4;
 		        
 		    x = x + dx[cur];
 		    y = y + dy[cur];
 		}
    }
};

