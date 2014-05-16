#include <vector>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> str;
        int i;
        for (i=0;i<s.length();i++) {
            if (s[i]>='a'&&s[i]<='z')
                str.push_back(s[i]);
            else if (s[i]>='A'&&s[i]<='Z') 
                str.push_back(s[i]-'A'+'a');
            else if (s[i]>='0'&&s[i]<='9')
                str.push_back(s[i]);
        }
        int l=str.size()-1;
        i=0;
        while (i<l) {
            if (str[i]!=str[l])
                return false;
            i++;
            l--;
        }
        return true;
    }
};