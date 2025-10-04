// Last updated: 10/4/2025, 5:45:58 PM
bool isHappy(int n) {
    int sum, m;

    while (1) {
        sum = 0;

        // Get sum of squares of digits
        while (n != 0) {
            m = n % 10;
            sum += m * m;
            n = n / 10;
        }

        if (sum == 1)
            return true;
        else if (sum == 4)
            return false;  // 4 is part of the cycle for unhappy numbers

        n = sum;  // repeat the process
    }
}
