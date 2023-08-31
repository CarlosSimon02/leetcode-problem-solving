class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<char> vec;
        int longestSubstrLen = 0;
        for (size_t i = 0; i < s.size(); i++)
        {
            auto itr = find(vec.begin(),vec.end(),s[i]);
            if(!(itr == vec.end()))
            {
                if(longestSubstrLen < vec.size()) 
                    longestSubstrLen = vec.size();
                vec.erase(vec.begin(),itr + 1); 
            }
            vec.push_back(s[i]);
        }
        if(longestSubstrLen < vec.size()) 
                longestSubstrLen = vec.size();
        return longestSubstrLen;
    }
};