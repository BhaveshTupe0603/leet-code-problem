// Last updated: 10/4/2025, 5:44:51 PM
int passThePillow(int n, int time) {
    int cycle = n - 1;
    int full_cycles = time / cycle;
    int remainder = time % cycle;

    if (full_cycles % 2 == 0) {
        return 1 + remainder;  // moving forward
    } else {
        return n - remainder;  // moving backward
    }
}
