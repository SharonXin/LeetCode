class Solution {
public:
    vector<vector<int> > generate(int numRows) {
        vector<vector<int> > triangle;
        if (numRows == 0)
            return triangle;
        if (numRows == 1) {
            vector<int> r;
            r.push_back(1);
            triangle.push_back(r);
            return triangle;
        }
        vector<int> r1, r2;
        r1.push_back(1);
        r2.push_back(1);
        r2.push_back(1);
        triangle.push_back(r1);
        triangle.push_back(r2);
        
        int i,j;
        for (i=2;i<numRows;i++) {
            vector<int> r;
            for (j=0;j<=i;j++) {
                if (j-1>=0&&j<i)
                    r.push_back(triangle[i-1][j]+triangle[i-1][j-1]);
                else if (j-1>=0)
                    r.push_back(triangle[i-1][j-1]);
                else
                    r.push_back(triangle[i-1][j]);
            }
            triangle.push_back(r);
        }
        return triangle;
    }
};