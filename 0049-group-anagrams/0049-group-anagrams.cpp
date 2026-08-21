class Solution{
public: 
    vector<vector<string>> groupAnagrams(vector<string>& strs){
      unordered_map<string, vector<string>> group;
      for(auto &s : strs){
        int count[26] = {0};
        for(char c : s){
          count[c - 'a']++;
        }
        string key = "";
        key.reserve(26 * 4);
        for(int i = 0 ; i < 26; ++i){
          key += to_string(count[i]) + '#';
        }
        group[key].push_back(s);


      } 
      vector<vector<string>> results;
      for(auto &p : group){
        results.push_back(p.second);
      }
      return results;



    }

};