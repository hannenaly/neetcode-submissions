class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!= t.length())
        return false;
        vector<bool> isused(t.length(), false);
        for(int i=0; i<s.length(); i++){
            bool found= false;
            for(int j=0; j<t.length(); j++){
                if(!isused[j] && s[i]==t[j]){
                isused[j]=true;
                found= true;
                break;
                }
            }
        if(!found)
        return false;
        } 
        return true;
    }
};
