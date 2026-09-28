class Solution {
public:
    string addBinary(string a, string b) {
        int carry = 0;
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());

        string res = "";
        int i = 0, j = 0;
        while(i < a.size() || j < b.size() || carry) {
            int total = carry;
            if(i < a.size()) total += (a[i] - '0');
            if(j < b.size()) total += (b[j] - '0');

            char res_bit = (total % 2) + '0'; 
            carry = total / 2;

            res = res_bit + res;
            i++,j++;
        }

        return res;
    }
};