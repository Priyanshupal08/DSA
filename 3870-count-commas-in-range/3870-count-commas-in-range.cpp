class Solution {
public:
    int countCommas(int n) {
        
        if(n<1000){
            return 0;
        }

        int ans=0;
        string s= to_string(n);
        int k= s.size();

        int num= 9000;
        int i=4;
        int count;
        while(i<k){
            count= (i%3==0)? (i/3)-1 : i/3; 
            ans+= count*num;
            num*=10;
            i++;
        }

        count= (i%3==0)? ((i/3)-1) : i/3; 
        int base= pow(10,(i-1));


        // cout<<base<<endl;

        ans+= ((n-base+1)*count);

        return ans;


    }
};