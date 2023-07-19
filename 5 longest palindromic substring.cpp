class Solution {
public:
    string ans = "";
    void expand(string &s, int left, int right)
    {
        while(left >= 0 && right < s.size())
        {
            if(s[left] != s[right]){
                break;
            }
            else{
                left--;
                right++;
            }
        }
        if(ans.size() < right - left)
            ans = s.substr(left+1, right - left - 1);
    }
    string longestPalindrome(string s) {
        int len1 = s.size();
        for(int i = 0;i<len1;i++){
            expand(s, i, i);
            expand(s, i, i+1);
        }
        return ans;    
    }
};
