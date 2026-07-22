class Solution {
public:
    int largestInteger(int num) {
        
        string s= to_string(num);
        int n= s.size();

        int i=0;
        int k=0;
        while(i<n-1){

            if(s[i]%2==0){

                int j= n-1;
                char maxi=s[i];
                int ind=-1;
                
                while(j>i){
                    if(s[j]%2==0 && s[j]>maxi){
                        maxi=s[j];
                        ind=j;
                    }
                    j--;
                }

                if(maxi!=s[i]){
                    swap(s[i],s[ind]);
                }

            }

            else{

                int j=n-1;
                int maxi=s[i];
                int ind=-1;
                
                while(j>i){
                    if(s[j]%2!=0 && s[j]>maxi){
                        maxi=s[j];
                        ind= j;
                    }
                    j--;
                }

                if(maxi!=s[i]){
                    swap(s[i],s[ind]);
                }

            }

            i++;
        }

        int ans= stoi(s);
        return ans;

    }
};