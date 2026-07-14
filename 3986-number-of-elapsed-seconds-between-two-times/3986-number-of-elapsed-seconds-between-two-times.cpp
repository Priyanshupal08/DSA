class Solution {
public:
    int secondsBetweenTimes(string a, string b) {

        int n=a.size();
        int m=b.size();

        int x=0;

        int hr1=0;
        int min1=0;
        int sec1=0;
        
        for(int i=0; i<n-1; i++){

            if(a[i]==':'){
                x++;
                continue;
            }

            if(x==0){
                string s="";

                s+= a[i];
                s+=a[i+1];
                hr1= stoi(s);
                i++;
            }
            else if(x==1){
                string s="";

                s+= a[i];
                s+=a[i+1];
                min1= stoi(s);
                i++;
            }

            else{
                
                string s="";

                s+= a[i];
                s+=a[i+1];
                sec1= stoi(s);
                i++;
            }

        }

        x=0;
        
        int hr2=0;
        int min2=0;
        int sec2=0;
        
            
        for(int i=0; i<m-1; i++){

            if(b[i]==':'){
                x++;
                continue;
            }

            if(x==0){
                string s="";

                s+= b[i];
                s+= b[i+1];
                hr2= stoi(s);
                i++;
            }
            else if(x==1){
                string s="";

                s+= b[i];
                s+=b[i+1];
                min2= stoi(s);
                i++;
            }

            else{
                
                string s="";

                s+= b[i];
                s+=b[i+1];
                sec2= stoi(s);
                i++;
            }
            
        }

        int p= hr2- hr1;
        int q= min2-min1;
        int r= sec2-sec1;

        
        int ans= (p*3600)+ (q*60) + r;

        return ans;
        
        
        
        
    }
};