class Solution {
public:
    int strStr(string haystack, string needle) {
        int i = haystack.find(needle);
        if(i != string::npos){
            return i;
        }
        return -1;
        
    }
};
