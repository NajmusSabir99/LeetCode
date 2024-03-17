class Solution {
public:
    int romanToInt(string s) {
        int output = 0;
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == 'M') {
                output += 1000;
            } else if (s[i] == 'D') {
                output += 500;
            } else if (s[i] == 'C' && s[i+1] == 'M') {
                output += 900;
                ++i;
            } else if (s[i] == 'C' && s[i+1] == 'D') {
                output += 400;
                ++i;
            } else if (s[i] == 'C') {
                output += 100;
            } else if (s[i] == 'L') {
                output += 50;
            } else if (s[i] == 'X' && s[i+1] == 'C') {
                output += 90;
                ++i;
            } else if (s[i] == 'X' && s[i+1] == 'L') {
                output += 40;
                ++i;
            } else if (s[i] == 'X') {
                output += 10;
            } else if (s[i] == 'V') {
                output += 5;
            } else if (s[i] == 'I' && s[i+1] == 'X') {
                output += 9;
                ++i;
            } else if (s[i] == 'I' && s[i+1] == 'V') {
                output += 4;
                ++i;
            } else if (s[i] == 'I') {
                output += 1;
            }
        }
        
        return output;
    }
};
