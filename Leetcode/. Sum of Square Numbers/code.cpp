bool judgeSquareSum(int c) {
    int a = 0;
    int b = static_cast<int>(std::sqrt(c));
    while (a <= b) {
        long long value = static_cast<long long>(a) * a + static_cast<long long>(b) * b;
        if (value < c) {
            a++;
        } else if (value > c) {
            b--;
        } else {
            return true;
        }
    }
    return false;
}
