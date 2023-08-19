class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i=0; i<haystack.length(); i++){
            if(haystack[i] == needle[0]){
                int count = 0;
                for(int j=0; j<needle.length(); j++){
                    if(haystack[j+i] == needle[j]){
                        count++;
                    }
                    else {break;}
                }
                if(count == needle.length()) return i;
            }
        }
        return -1;
    }
};
