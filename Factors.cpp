vector<int> factors(int n){
    vector<int> factors;
    int till = sqrt(n);
    for(int i = 1; i <= till; i++){
        if(n%i == 0){
            factors.push_back(i);
            if(n/i != i){
                factors.push_back(n/i);
            }
        }
    }
    
    //sort is optional
    sort(factors.begin(), factors.end());
    
    return factors;
}
