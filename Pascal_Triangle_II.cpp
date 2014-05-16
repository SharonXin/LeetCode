class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> row;
        row.reserve(rowIndex+1);
        row.push_back(1);
        if (rowIndex == 0)
            return row;
        row.push_back(1);
        int pre,cur,i,j;
        for (i=2;i<=rowIndex;i++) {
            pre = 1;
            for (j=1;j<i;j++) {
                cur = row[j];
                row[j]+=pre;
                pre=cur;
            }
            row.push_back(1);
        }
        return row;
    }
};