
int Solution::trailingZeroes(int A) {
    int cont=0;
    for(int i=5;A/i>=1;i*=5) cont+=A/i;
    return cont;
}
