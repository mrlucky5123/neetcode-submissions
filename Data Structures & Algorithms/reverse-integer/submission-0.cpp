class Solution {
public:
    int reverse(int x) {
        bool negative = x < 0;
        string s = to_string(x);
        if(negative) s = s.substr(1);
        std::reverse(s.begin(), s.end());
        long long ex = stoll(s);

        if(negative) ex = -ex;

        if(ex < INT_MIN || ex > INT_MAX) return 0;
        return ex;
    }
};
