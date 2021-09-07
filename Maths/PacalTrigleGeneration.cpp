class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector< vector<int>>currRow;
        currRow.push_back({1});
        vector<int>vect;
        for (int i = 1; i <numRows; i++)
        {
          vect.clear();

         for (int j = 0; j <= i; j++)
        {
            if(j==0||j==i)
                vect.push_back(1);


             else{

                vect.push_back(currRow[i-1][j-1]+currRow[i-1][j]);
                }

            }
        currRow.push_back(vect);

        }
    return currRow;
    }
};
