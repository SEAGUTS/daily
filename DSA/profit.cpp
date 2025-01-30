#include <iostream>
using namespace std;
void profit(int a[],int n)
{
    int temp,temp1=0,temp2,index;
    for (int i = 0; i <= n; i++)
    {
        temp2=a[i];
        if(temp2<a[i+1])
        {
            if(a[i+1]>a[i+2])
            {
                
                if ((i+2)!=n)
                {
                    temp1=temp1+(a[i+1]-temp2);
                    
                }
                
                
            }
        }
    }
    cout<<temp1+a[n-1]  ;
}
int main()
{
    int price[] = { 2, 30, 15, 10, 8, 25, 80 };
    int n = sizeof(price) / sizeof(price[0]);
    profit(price,n);
    return 0;
}