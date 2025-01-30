/*recurssion funtion
need  1 -base criteria
need 2 - condition
*/
#include <stdio.h>
void print(int n);
void print(int n) //calle funtion
{
    //base criteria
    if (n==0)
    {
        return;
    }
    //condition
    print(n-1);
    printf("%d ",n);
}
void main() //calling funtion
{
    int x = 10;
    print(x);
}