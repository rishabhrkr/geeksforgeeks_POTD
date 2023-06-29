class Solution{
public:
   int nextHappy(int N){
        // code here
         N=N+1;
        int num = N;
        
        while(num != 1){
            
            while(num > 4){
                
               int sum = 0 , d = num;
               while(d > 0){
                   sum += pow(d%10,2);
                   d /= 10;
               }
               num = sum;
            }
            
           if(num == 1) return N;
           else{
               num = ++N;
           }
         
         
        }
    }
};
