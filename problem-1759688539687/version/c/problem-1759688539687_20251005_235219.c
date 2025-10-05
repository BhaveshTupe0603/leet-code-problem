// Last updated: 10/5/2025, 11:52:19 PM
bool isUgly(int n) {
    if (n <= 0) return false;
    int primes[3] = {2, 3, 5};
    for (int i = 0; i < 3; i++) {
        while (n % primes[i] == 0) {
            n /= primes[i];
        }
    }
    return n == 1;
}
