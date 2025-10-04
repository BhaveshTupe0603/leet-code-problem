// Last updated: 10/4/2025, 5:45:46 PM
bool isPowerOfFour(int n) {
    if (n <= 0)
        return false;

    while (n % 4 == 0) {
        n /= 4;
    }

    return n == 1;
}