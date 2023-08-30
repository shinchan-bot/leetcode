class Solution {
public:
    string addBinary(string a, string b) {
        string s;

        int carry = 0;
        int lena = a.length();
        int lenb = b.length();
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());

        if(lenb < lena){
            while(lenb < lena){
                b+='0';
                lenb++;
            }
        }else{
            while(lenb > lena){
                a+='0';
                lena++;
            }
        }
        for(int i=0 ; i < lena; i++){
            if(a[i] == '1' && b[i] == '1' ) {
                if(carry == 1){
                    s+='1';
                    carry = 1;
                }else{
                    s+='0';
                    carry = 1;
                }
            }else if((a[i] == '0' && b[i] == '1') || (a[i] == '1' && b[i] == '0')){
                if(carry == 1){
                    s+='0';
                    carry = 1;
                }else{
                    s+='1';
                    carry = 0;
                }
            }else{
                if(carry == 1){
                    s+='1';
                    carry =0;
                }else{
                    s+='0';
                    carry = 0;
                }
            }
        }
        if(carry == 1){
            s+='1';
        }

        std::reverse(s.begin(), s.end());
        return s;

    }
};
