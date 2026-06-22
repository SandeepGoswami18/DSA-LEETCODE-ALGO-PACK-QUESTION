class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> mp;
        int mini = INT_MAX;
        for (char& ch : text) {
            mp[ch]++;
        }
        mini = min(mini, mp['b']);
        mini = min(mini, mp['a']);
        mini = min(mini, mp['l'] / 2);
        mini = min(mini, mp['o'] / 2);
        mini = min(mini, mp['n']);
        return mini;
    }
};