class Solution {
public:
    bool isAnagram(string s, string t) {
        /*std::vector<int> a,b;
        for(std::size_t i=0;i<s.size();i++)
        {
            a.push_back(int(s[i]));
        }
        for(std::size_t i=0;i<t.size();i++)
        {
            b.push_back(int(t[i]));
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        if(a == b)
            return true;
        else
            return false;*/
        if (s.length() != t.length()) {
            return false;
        }

        unordered_map<char, int> countS;
        unordered_map<char, int> countT;
        for (int i = 0; i < s.length(); i++) {
            countS[s[i]]++;
            countT[t[i]]++;
        }
        return countS == countT;
    }
};
