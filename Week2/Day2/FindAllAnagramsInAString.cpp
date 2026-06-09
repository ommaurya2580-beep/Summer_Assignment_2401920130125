class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        vector<int> ans;

        int n = p.size();
        int m = s.size();

        if(n > m) return ans;

        vector<int> freqP(26, 0);
        vector<int> freqS(26, 0);

        for(int i = 0; i < n; i++) {
            freqP[p[i] - 'a']++;
            freqS[s[i] - 'a']++;
        }

        if(freqP == freqS)
            ans.push_back(0);

        for(int i = n; i < m; i++) {

            freqS[s[i] - 'a']++;
            freqS[s[i - n] - 'a']--;

            if(freqP == freqS)
                ans.push_back(i - n + 1);
        }

        return ans;
    }
};
