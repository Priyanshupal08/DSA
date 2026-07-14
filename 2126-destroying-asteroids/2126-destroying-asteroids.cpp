class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& ast) {
        
        int n= ast.size();

        long long w=mass;
        
        int mini= *min_element(ast.begin(), ast.end());
        int maxi= *max_element(ast.begin(), ast.end());

        vector<int> freq(maxi+1, 0);
        
        for(int i=0; i<n; i++){
            freq[ast[i]]++;
        }


        for(int i=mini; i<freq.size(); i++){

            if(w<i){
                return false;
            }
            w+= ((long long)i* (long long)freq[i]);
        }

        return true;


    }
};