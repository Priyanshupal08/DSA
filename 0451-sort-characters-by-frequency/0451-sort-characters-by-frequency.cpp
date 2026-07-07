class Solution {
public:
    string frequencySort(string s) {
        
        unordered_map<char, int> m;

        for(char ch: s){
            m[ch]++;
        }

        vector<string> vec(s.size()+1);

        for(auto& i: m){
            vec[i.second].append(i.second, i.first);
        }

        string ans="";

        for(int i=vec.size()-1; i>0; i--){

            ans+=vec[i];

        }

        return ans;

    }
};