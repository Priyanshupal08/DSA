class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();

        if(n==0) return "";

        string comp= strs[0];
        
        int n1=comp.size();
        
        for(int i=1; i<n; i++){
            int j=0;
            string k=strs[i];
            while(j < comp.size() && j < k.size() && comp[j] == k[j]){
                j++;
            }
            
            comp.erase(j);
            
        }
        
        return comp;
    }
};