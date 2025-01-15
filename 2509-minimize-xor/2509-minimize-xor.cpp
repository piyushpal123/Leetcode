class Solution {
public:
    int minimizeXor(int num1, int num2) {
        int b = __builtin_popcount(num2); 
    int result = 0;

   
    for (int i = 31; i >= 0 && b > 0; i--) {
        if (num1 & (1 << i)) { 
            result |= (1 << i);
            b--;
        }
    }

    for (int i = 0; i <= 31 && b > 0; i++) {
        if (!(result & (1 << i))) { 
            result |= (1 << i); 
            b--;
        }
    }

    return result;
        
    }
};