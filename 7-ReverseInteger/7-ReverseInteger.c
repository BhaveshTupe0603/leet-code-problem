// Last updated: 10/4/2025, 5:46:17 PM
int reverse(int x){
   long int rev=0;
while(x!=0)
{

rev=rev*10+x%10;
x=x/10;
}
if(rev>INT_MAX||rev<INT_MIN)
return 0;
else
return rev;
}