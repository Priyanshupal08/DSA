class Solution {
public:
    bool stoneGame(vector<int>& piles) {

        int n= piles.size();

        sort(piles.begin(), piles.end());

        int x=0, y=0;
        for(int i=n-1; i>=0; i--){
            x+=piles[i--];
            y+=piles[i];
        }

        return (x>y)? true: false;

    }
};