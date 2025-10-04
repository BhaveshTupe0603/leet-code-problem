// Last updated: 10/4/2025, 5:45:17 PM
int minCostToMoveChips(int* p, int n) {
    int odd=0,even=0,i;
    for(i=0;i<n;i++){
        if(p[i]%2==0)
        even++;
        else
        odd++;
    }
        int ans=odd<even?odd:even;
        return ans;
    } 
    