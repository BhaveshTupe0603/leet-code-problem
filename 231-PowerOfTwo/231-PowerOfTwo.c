// Last updated: 10/4/2025, 5:45:51 PM
bool isPowerOfTwo(int n) {
    if(n<=0)
    return false;
    else
    return ((n&n-1)==0);
}