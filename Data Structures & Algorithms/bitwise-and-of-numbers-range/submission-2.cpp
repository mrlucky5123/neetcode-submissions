class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        // int res = 0;
        // for(int i = 0; i < 31; i++) {
        //     bool allOne = true;
        //     for(int j = left; j <= right; j++) {
        //         if(((j >> i) & 1) == 0) {
        //             allOne = false;
        //             break;
        //         }
        //     }
        //     if(allOne) {
        //         res = res | (1 << i);
        //     }
        // }

        // return res;

        int shifts = 0;

        while(left != right) {
            left >>= 1;
            right >>= 1;
            shifts++;
        }

        return left << shifts;
    }
};