class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        
        priority_queue<int> p;

        for(int i: gifts){
            p.push(i);
        }

        while(k--){
            int x= p.top();
            p.pop();

            p.push(pow(x,0.5));
        }

        long long sum=0;
        while(!p.empty()){
            sum+=p.top();
            p.pop();
        }

        return sum;

    }
};