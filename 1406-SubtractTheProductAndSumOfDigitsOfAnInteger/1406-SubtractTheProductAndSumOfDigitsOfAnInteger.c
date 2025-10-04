// Last updated: 10/4/2025, 5:45:13 PM
int subtractProductAndSum(int n) {
    int sum = 0;
    int product = 1;

    while (n != 0) {
        int digit = n % 10;
        sum += digit;
        product *= digit;
        n /= 10;
    }

    return product - sum;
}
