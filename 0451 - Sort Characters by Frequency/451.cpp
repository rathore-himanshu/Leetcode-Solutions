bool cmp(pair<char, int>& a, pair<char, int>& b) {
    return a.second > b.second;
}

class Solution {
public:
    string frequencySort(string s) {
        map<char,int> freq;
        for (char& ch : s)
            freq[ch]++;

        vector<pair<char,int>> valueKeyMap;
        for(auto& it : freq)
            valueKeyMap.push_back(it);
        sort(valueKeyMap.begin(), valueKeyMap.end(), cmp);
        
        string ans = "";
        for (auto& it : valueKeyMap) {
            for (int i = 0; i < it.second; i++)
                ans += it.first;
        }
        return ans;
    }
};