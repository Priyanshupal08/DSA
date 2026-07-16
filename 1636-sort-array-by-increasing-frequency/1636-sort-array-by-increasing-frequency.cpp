class Solution {
public:

    static bool comp(pair<int, int> &a, pair<int, int> &b){
        if(a.first==b.first){
            return a.second>b.second;
        }    
        
        return a.first<b.first;
    }

    vector<int> frequencySort(vector<int>& nums) {
        int n= nums.size();

        unordered_map<int, int> m;
        for(int i=0; i<n; i++){
            m[nums[i]]++;
        }

        vector<pair<int, int>> vec;
        vector<int> ans;

        for(auto& i:m){
            vec.push_back({i.second, i.first});
        }

        sort(vec.begin(), vec.end(), comp);

        for(int i=0; i<vec.size(); i++){

            for(int j=0; j<vec[i].first; j++){
                ans.push_back(vec[i].second);
            }

        }
        return ans;
    }
};