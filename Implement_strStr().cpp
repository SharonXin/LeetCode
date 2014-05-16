class Solution {
public:
    char *strStr(char *haystack, char *needle) {
        int l1 = strlen(haystack);
        int l2 = strlen(needle);
        
        int i,j;
        for (i=0;i<=l1-l2;i++) {
            for (j=0;j<l2;j++) {
                if (haystack[i+j]!=needle[j])
                    break;
            }
            if (j==l2)
                return (haystack+i);
        }
        return NULL;
    }
};