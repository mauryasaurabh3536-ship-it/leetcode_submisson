class ProductOfNumbers {
public:
    vector<int> v;
    ProductOfNumbers() {
        
    }
    
    void add(int num) {
        v.push_back(num);
    }
    
    int getProduct(int k) {
        int n=v.size()-1;
        int pro=1;
        if(k>n+1) return 0;
        for(int i=n;i>=n-k+1;i--){
            pro*=v[i];
        }
        return pro;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */