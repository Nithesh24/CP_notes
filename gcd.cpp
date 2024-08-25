int gcd(int n, int m){
    while(n && m){
        if(n > m){
            n = n%m;
        }else{
            m = m%n;
        }
    }
    
    if(n)
        return n;
    return m;
}
