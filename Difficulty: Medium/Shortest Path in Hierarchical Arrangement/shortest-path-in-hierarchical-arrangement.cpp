class Solution {
  public:
    int shortestPath(int x, int y) {
        // code here
        
        int dist=0;
        while(x!=y){
            if(x>y){
                x/=2;
            }
            else{
                y/=2;
            }
            dist++;
        }
        
        return dist;
        
    }
};