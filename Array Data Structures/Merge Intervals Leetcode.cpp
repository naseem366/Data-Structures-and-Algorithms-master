class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& in) {
sort(in.begin(),in.end());
 int i=0;
 int n=in.size();
 for(int j=1;j<n;j++)
     if(in[j][0] >in[i][1])
         in[++i]=in[j];
     else in[i][1]=max(in[i][1],in[j][1]);
     while(--n>i) in.pop_back();
     return in;













    }
};
