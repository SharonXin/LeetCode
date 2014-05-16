class Solution {
public:
    int singleNumber(int A[], int n) {
        int i, result;
        result = 0;
        for (i=0;i<n;i++)
            result = result^A[i];
        return result;
    }
};