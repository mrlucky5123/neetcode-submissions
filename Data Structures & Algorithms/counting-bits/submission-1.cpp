class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> a(n+1);
        // for(int i = 1; i <= n; i++) {
        //     int cnt = 0;
        //     int x = i;
        //     while(x > 0) {
        //         if(x&1) cnt++;
        //         x = x >> 1;
        //     }
        //     a[i] = cnt;
        // }
        for(int i = 1; i <= n; i++) {
            a[i] = a[i>>1] + (i&1);
        }
        return a;
    }
};
