//palindrome
#include <iostream>
using namespace std;
char islower(char ch)
{
    if (ch>='a' && ch<='z')
    {
        return ch;
    }
    else
    {
        return ch - 'A' + 'a';
    }
    
}
int getlength(char a[])
{
    int count=0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        count++;
    }
    return count;   
}
int main()
{
    char a[]="GooG";
    int i,j,flag = 0;
    int n = getlength(a);
    for ( i = 0,j = n-1; i < n/2 , j >= n/2; i++,j--)
    {
        if (islower(a[i])!=islower(a[j]))
        {
            flag = 1;
            break;
        }
        
    }
    if (flag == 1)
    {
        cout<<"not at all"<<endl;
    }
    if (flag == 0)
    {
        cout<<"palindrome"<<endl;
    }
    cout<<"character is :"<<islower('b')<<endl;
    cout<<"character is :"<<islower('B');
    return 0;
}
