class Solution {
public:
    int minOperations(vector<int>& nums) {
        
        unordered_map<int,int> m;

        for(int i=0; i<nums.size(); i++){
            m[nums[i]]++;
        }

        int op=0;

        for(auto& i: m){
            
            if(i.second==1){
                return -1;
            }

            if((i.second)%3==0){
                op+=i.second/3;
            }
            
            else{
                int rem= i.second%3;

                if(rem%2==0){
                    op+= (i.second-rem)/3;
                    op+=rem/2;
                }
                else{
                    rem+=3;
                    op+= (i.second-rem)/3;
                    op+=rem/2;
                }
            }

        }

        // if(op==0){
        //     return -1;
        // }

        return op;
    }
};