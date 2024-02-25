class Solution {
public:
    bool canWinNim(int n) {
        // Key observation - if n is a multiple of 4, there is nothing you can do
        // Otherwise you can win
        return n % 4;    
    }
};
