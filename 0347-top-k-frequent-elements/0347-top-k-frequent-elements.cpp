class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
         unordered_map<int, int> m;

         for(int i: nums){
            m[i]++;
         }

         priority_queue<pair<int,int>> p;

         for(auto i: m){
            p.push({i.second, i.first});
         }


        vector<int> ans;
         for(int i=0; i<k; i++){
            pair<int,int> x= p.top();
            p.pop();
            ans.push_back(x.second);
         }

         return ans;

         

    }
};