class Solution {
public:
    int minimumPushes(string word) {

        vector<int> vec(256,0);


        for(char i: word){
            vec[i-'a']++;
        }

        sort(vec.begin(), vec.end(), greater<int>());

        for(int i: vec){
            cout<<i<<" ";
        }
        cout<<endl;
        
        int j=1;
        int ans=0;

        for(int i: vec){
            
            if(!i) break;

            int mul;
            if(j%8==0){
                mul=j/8;
            }
            else{
                mul= (j/8)+1;
            }

            ans+= (mul*i);
            j++;
        }
        return ans;

    }
};