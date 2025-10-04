// Last updated: 10/4/2025, 5:44:45 PM
int numberOfCuts(int n) {
    if(n==1)
    return 0;
    if(n%2==0)
    return n/2;
    else 
    return n;
}