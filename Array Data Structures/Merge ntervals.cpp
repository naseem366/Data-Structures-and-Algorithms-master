/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
  bool mycomp(Interval i,Interval j){
     return i.start<j.start;
 }
vector<Interval> Solution::insert(vector<Interval> &in, Interval newInterval) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    in.push_back(newInterval);
    sort(in.begin(),in.end(),mycomp);
    vector<Interval>ans;
    int n=in.size();
    ans.push_back(in[0]);
    for(int i=0;i<n;i++){

        if(in[i].start<=ans[ans.size()-1].end)
            ans[ans.size()-1].end=max(ans[ans.size()-1].end,in[i].end);
        else
        ans.push_back(in[i]);
    }
    return ans;

}

