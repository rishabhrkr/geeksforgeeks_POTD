class TrieNode{
    public:
    vector<TrieNode*> next;
    
    TrieNode(){
        next = vector<TrieNode*> (2, nullptr);
    }
};

class Solution
{
    public:
    // #define MAX 1000
    vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col)
    {
        TrieNode * root = new TrieNode;
        vector<vector<int>> ans;
        
        for(int i = 0; i < row; i++){
            bool ok = 0;
            vector<int> newRow;
            TrieNode * current = root;
            
            for(int j = 0; j < col; j++){
                newRow.push_back(M[i][j]);
                if(current -> next[M[i][j]] != nullptr){
                    current = current -> next[M[i][j]];
                }    
                else{
                    TrieNode * newnode = new TrieNode;
                    current -> next[M[i][j]] = newnode;
                    current = newnode;
                    ok = 1;
                }
            }
            
            if(ok){
                ans.emplace_back(newRow);
            }
        }
        
        return ans;
    }
};
