class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> a(n+1);
        for(int i = 1; i <= n; i++) {
            int cnt = 0;
            int n = i;
            while(n > 0) {
                if(n&1) cnt++;
                n = n >> 1;
            }
            a[i] = cnt;
        }
        return a;
    }
};
