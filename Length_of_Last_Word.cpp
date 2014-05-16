class Solution {
public:
    int lengthOfLastWord(const char *s) {
        int l = strlen(s);
        while (s[l-1]==' ')
            l--;
        int i;
        for (i=l-1;i>=0;i--) {
            if (s[i]==' ')
                break;
        }
        return l-1-i;
    }
};