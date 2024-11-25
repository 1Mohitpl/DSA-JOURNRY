class Solution {
public:
    int getSum(int a, int b) {
        while (b != 0) {
        // Calculate sum without carry
        int sum = a ^ b;

        // Calculate carry
        int carry = (a & b) << 1;

        // Update a and b
        a = sum;
        b = carry;
    }
    return a;
    }
};