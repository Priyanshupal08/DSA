class Solution {
public:
    string winningPlayer(int x, int y) {
        
        int chance=1;

        while(x>=1 && y>=4){
            x--;
            y-=4;
            chance= ((chance==1)? 0: 1);
        }

        if(chance){
            return "Bob";
        }
        return "Alice";


    }
};