// Last updated: 10/4/2025, 5:44:52 PM
int commonFactors(int a, int b) {
    int min = (a < b) ? a : b;
    int count = 0;

    for (int i = 1; i <= min; i++) {
        if (a % i == 0 && b % i == 0) {
            count++;
        }
    }

    return count;
}
