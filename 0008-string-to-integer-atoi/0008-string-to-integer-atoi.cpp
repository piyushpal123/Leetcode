class Solution {
public:
    int myAtoi(string s) {
          int n = s.size();
        int i = 0;
        bool neg = false;
        long long res = 0; 

        while (i < n && s[i] == ' ') {
            i++;
        }

        if (i < n && (s[i] == '+' || s[i] == '-')) {
            neg = (s[i] == '-');
            i++;
        }

      
        while (i < n && isdigit(s[i])) {
            int digit = s[i] - '0';
            res = res * 10 + digit;

          
            if (res > INT_MAX) {
                return neg ? INT_MIN : INT_MAX;
            }
            i++;
        }

     
        if (neg) {
            res = -res;
        }

       
        if (res < INT_MIN) {
            return INT_MIN;
        }
        if (res > INT_MAX) {
            return INT_MAX;
        }

        return static_cast<int>(res);
    }
    
};