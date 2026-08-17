class Solution {
public:
    bool isAnagram(string s, string t) {
      // Bước 1: kiểm tra độ dài – nếu khác nhau thì không thể là anagram
        if (s.length() != t.length()) return false;

        // Bước 2: tạo mảng đếm 26 phần tử (cho 26 chữ cái thường)
        vector<int> count(26, 0);   // khởi tạo tất cả bằng 0

        // Bước 3: duyệt đồng thời cả hai chuỗi
        for (int i = 0; i < s.length(); i++) {
            count[s[i] - 'a']++;   // tăng cho ký tự trong s
            count[t[i] - 'a']--;   // giảm cho ký tự trong t
        }

        // Bước 4: kiểm tra mảng đếm, nếu có phần tử khác 0 => không phải anagram
        for (int i = 0; i < 26; i++) {
            if (count[i] != 0) return false;
        }

        return true; // tất cả đều 0 => hai chuỗi là anagram

      
        
    }
};