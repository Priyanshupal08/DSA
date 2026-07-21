class Solution {
public:

    bool gcd(int a, int b){

        while(a>0 && b>0){

            if(a>b){
                a=a%b;
            }

            else{
                b=b%a;
            }

        }

        if(a==0 && b==1) return true;

        if(b==0 && a==1) return true;

        return false;

    }

    vector<string> simplifiedFractions(int n) {
        
        vector<string> ans;

        for(int i=2; i<=n; i++){

            for(int j=1; j<i; j++){

                if(gcd(i,j)){
                    string k="";
                    k+= to_string(j);
                    k+= "/";
                    k+= to_string(i);
                    ans.push_back(k);
                }
            }

        }

        return ans;

    }
};