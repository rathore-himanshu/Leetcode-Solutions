class Solution {
public:
    bool closeStrings(string word1, string word2) {
        map<char, int> freq1, freq2;
        
        for (char& ch : word1) 
            freq1[ch]++;
        
        for (char& ch : word2) 
            freq2[ch]++;
        
        if (freq1 == freq2)
            return true;

        set<char> chars1, chars2;
        multiset<int> freqs1, freqs2;

        map<char, int>::iterator itr;
        
        for(itr=freq1.begin(); itr!=freq1.end(); itr++) {
            chars1.insert(itr->first);
            freqs1.insert(itr->second);
        }
        
        for(itr=freq2.begin(); itr!=freq2.end(); itr++) {
            chars2.insert(itr->first);
            freqs2.insert(itr->second);
        }
        
        if (chars1 == chars2 and freqs1 == freqs2)
            return true;
        return false;
    }
};


class OptimizedSolution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int> char1(26,false), char2(26,false), freq1(26,0), freq2(26,0);
        for (char& ch : word1) {
            char1[ch-'a'] = true;
            freq1[ch-'a']++;
        }
        for (char& ch : word2) {
            char2[ch-'a'] = true;
            freq2[ch-'a']++;
        }
        sort(begin(freq1), end(freq1));
        sort(begin(freq2), end(freq2));
        return char1==char2 && freq1==freq2;
    }
};