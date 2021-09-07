string Solution::solve(int A) {
    string s="1";
    int prod;
    for(int i=2;i<=A;i++){
        int c=0;
        for(int j=s.size()-1;j>=0;j--){
            prod=(i*(s[j]-'0'))+c;
            s[j]='0'+(prod%10);
            c=prod/10;
        }
        if(c!=0)
            s=to_string(c)+ s;

    }
    return s;




}

