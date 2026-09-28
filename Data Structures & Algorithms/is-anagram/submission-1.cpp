// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         // unordered_map<char, int> s_string, t_string;
//         // for(int i = 0; i < s.size(); i++)
//         if(s.size() != t.size()) return false; 

//         vector<int> string_s(26, 0), string_t(26,0);
//         for(int i = 0; i < s.size(); i++) {
//             string_s[s[i] - 'a']++;
//             string_t[t[i] - 'a']++;
//         }

//         for(int i = 0; i < 26; i++) {
//             if(string_s[i] != string_t[i]) return false;
//         }
//         return true;
//     }
// };

class Solution {
    public: 
        bool isAnagram(string s, string t) {
            if(s.size() != t.size()) return false;

            vector<int> count(26, 0);
            for(int i = 0; i < s.size(); i++) {
                count[s[i] - 'a']++;
                count[t[i] - 'a']--;
            }
            for(int num : count) {
                if(num != 0) return false;
            }
            return true;
        }
};