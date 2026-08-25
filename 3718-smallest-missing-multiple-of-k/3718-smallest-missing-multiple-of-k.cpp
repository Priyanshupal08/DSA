class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> s;

        for(int i: nums){
            s.insert(i);
        }

        int n= nums.size();

        for(int i=1; i<=n; i++){
            if(s.find(i*k)==s.end()){
                return i*k;
            }
        }

        return k*(n+1);
    }
};