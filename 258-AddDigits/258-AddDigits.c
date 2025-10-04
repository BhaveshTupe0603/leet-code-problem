// Last updated: 10/4/2025, 5:45:47 PM
int addDigits(int num) {
    if (num == 0) return 0;
    return 1 + (num - 1) % 9;
}
