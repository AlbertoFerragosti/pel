bool tuttipari(const vector<int>& v){
    bool flag=true;

    for(int x:v){
        if (x%2!=0) 
            flag=false;
    }
    return flag;
}

bool tuttipari2(const vector<int>& v){
    bool pari=true;

    for (int element:v){
        pari=pari& element%2==0;
    }
    return pari;
}

bool tuttipari_earlyreturn(const vector<int>& v){
    for (int elemento:v){
        if (elemento%2!=0)
        return false;
    }
    return true;
}

bool tuttipari_while(const vector<int>& v){
    int i=0;
    bool pari=true;
    while (pari && i<v.size()){
        if(v.at(i)%2!=0)
        pari = false;
        i++;
    }
    return pari;
}

bool isprime(int n){
    if (n == 1) return false;

    else {
       bool prime = true;
       for(int i=2; i<= n-1; i++){
        if (n%i == 0) 
        prime = false;
       }
       return prime;
    }

}