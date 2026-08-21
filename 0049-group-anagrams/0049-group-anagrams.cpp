// Giải thuật sử dụng unordered map để truy cập được cái xâu qua key - value.
// Sơ qua về thuật toán là việc nó tạo ra 1 cái key vì với mỗi xâu là hoán vị của nhau
// thì từng chữ cái trong xâu sẽ giống hệt nhau nên nhiều xâu sẽ có cùng 1 key
// Việc đơn giản là tạo 1 mảng với kích thước 26 vì đây là số chữ cái có trong bảng.
// Sau đó duyệt mỗi xâu thì sẽ có được cái key đó, thêm key vơi value đó vào là xog.
// Giải thuật 1: dùng việc xuât hiẹn của chữ cái để làm key.
/*class Solution{
public: 
    vector<vector<string>> groupAnagrams(vector<string>& strs){
      unordered_map<string, vector<string>> group;
      for(auto &s : strs){ 
        int count[26] = {0}; // Khai báo mảng 36 phần tử.
        for(char c : s){
          count[c - 'a']++;// tạo 11 arr xâu bằng việc duyệt kí tự.
        }
        string key = "";// tạo key để thêm vào map.
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

};*/

// Giải thuật 2: tôi sẽ dùng chính thứ tự từ điển của từng xâu để làm key.
class Solution{
public: 
    vector<vector<string>> groupAnagrams(vector<string>& strs){
      unordered_map<string, vector<string>> group;
      for(auto &s : strs){ 
        string key = s;
        sort(key.begin(), key.end());
        
        group[key].push_back(s);


      } 
      vector<vector<string>> results;
      for(auto &p : group){
        results.push_back(p.second);
      }
      return results;



    }

};