class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>mp;
        for(char ch:magazine)
        {
            mp[ch]++;

        }
        for(char x:ransomNote)
        {
            if(mp[x]>0)
            {
                mp[x]--;
            }
            else
            {
                return false;
            }

        }
        return true;
        
    }
};