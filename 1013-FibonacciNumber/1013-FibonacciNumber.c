// Last updated: 10/4/2025, 5:45:22 PM
int fib(int n) {
    // LeetCode constraint: 0 <= n <= 30
    if (n == 0) return 0;
    if (n == 1) return 1;

    int a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}
