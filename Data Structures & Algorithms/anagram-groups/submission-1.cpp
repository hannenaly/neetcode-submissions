class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
      unordered_map<string, vector<string>> mp; // string=key vector<string>=value(array of strings) unorderedmap=hashmap(data structure)
      for(string s : strs){ //hnlef 3la el array
            string key= s;
            sort(key.begin(), key.end());
            mp[key].push_back(s);
      }
      vector<vector<string>> output;
      for(auto it :mp)
      output.push_back(it.second);

      return output;
    }
    
};
