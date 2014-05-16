class Solution {
public:
    int minnum(int a, int b) {
        if (a>b)
            return b;
        else
            return a;
    }
    int minimumTotal(vector<vector<int> > &triangle) {
        int n = triangle.size();
        if (n==0)
            return 0;
        int *table = new int[n];
        int i, j;
        for (i=0;i<n;i++)
            table[i] = triangle[n-1][i];
        
        for (i=n-2;i>=0;i--) {
            for (j=0;j<=i;j++) {
                table[j] = minnum(triangle[i][j]+table[j], triangle[i][j]+table[j+1]);
            } 
        }
        int result = table[0];
        delete []table;
        return result;
    }
};