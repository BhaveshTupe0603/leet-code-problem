// Last updated: 10/4/2025, 5:45:40 PM
bool isPowerOfThree(int n) {
    if (n <= 0) return false;
    
    while (n % 3 == 0) {
        n /= 3;
    }

    return n == 1;
}