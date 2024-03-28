class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> charset;
        int maxlen = 0, l = s.size(), right = 0, left = 0;
        
        while(right < l){
        	if(charset.find(s[right]) == charset.end()){
        		maxlen = max(maxlen, right - left + 1);
        		charset.insert(s[right]);
        		right++;

        	}else{
                charset.erase(s[left]);
        		left++;
        	}
        }
        return maxlen;
    }
};
