class ProductOfNumbers {
public:

    vector<int> pref;
    ProductOfNumbers() {
        pref.push_back(1);
    }
    
    void add(int num) {
        if(num==0){
            pref={1};
        }

        else{
            pref.push_back(pref.back()*num);
        }
    }
    
    int getProduct(int k) {

        if(k>=pref.size()) return 0;

        else{
            int ans= pref.back()/ pref[pref.size()-k-1];
            return ans;
        }


    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */