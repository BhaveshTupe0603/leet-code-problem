// Last updated: 10/4/2025, 5:45:37 PM
bool isPerfectSquare(int n) {
    if (n < 0)
        return false;
    if (n == 0 || n == 1)
        return true;

    int start = 1;
    int end = n / 2;

    while (start <= end) {
        long long mid = (start + end) / 2;
        long long square = mid * mid;

        if (square == n)
            return true;
        else if (square < n)
            start = mid + 1;
        else
            end = mid - 1;
    }

    return false;
}