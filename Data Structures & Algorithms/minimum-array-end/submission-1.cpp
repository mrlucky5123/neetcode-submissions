class Solution {
public:
    long long minEnd(int n, int x) {
        // long long res = x;

        // for(int i = 1; i < n; i++) {
        //     res += 1;
        //     res = res | x;
        // }
        // return res;

        long long res = x;
        long long k = n - 1;

        for(int bit = 0; bit < 63; bit++) {
            if((x & (1LL << bit)) == 0) {
                res |= (k & 1LL) << bit;
                k >>= 1;
            }
        }
        return res;
    }
};