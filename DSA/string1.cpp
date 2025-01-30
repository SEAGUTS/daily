#include <iostream>
#include <string>
using namespace std;
int getlength(char a[])
{
    int count=0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        count++;
    }
    return count;   
}
void reverse(char a[],int n)
{
    for (int i = 0; i < n/2; i++)
    {
        char temp = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i];
    }
}
void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void reverse1(char a[],int n)
{
    int s = 0;
    int e = n - 1;
    while (s<e)
    {
        swap(a[s++],a[e--]);
    }  
}
int main()
{
    char a[20];
    cin>>a;
    cout<<a<<endl;
    cout<<getlength(a)<<endl;
    int n = getlength(a);
    reverse1(a,n);
    cout<<a<<endl;
    return 0;
}
    // name[4]='\0';
    // coutname;<<
    // char a[11] = "shreyans h";
    // for (int i = 0; i < sizeof(a) - 1; i++)
    // {
    //     cout << a[i];

    //     if (a[i] != ' ')
    //     {
    //         if (i != sizeof(a)-2)
    //         {
    //             cout << "-";
    //         }
    //     }
    // }

    // string name = "shreyansh";
    // cout<<sizeof(a)<<endl;
    // cout<<name;
    // return 0;
    // cout<<length(name)<<endl;
    // char *ptr1;
    // ptr1=&a[5];
    // cout<<ptr1;
// void reverse(char a[],int n)
// {
//     for (int i = 0; i < n/2; i++)
//     {
//         char temp = a[i];
//         a[i] = a[n-i-1];
//         a[n-i-1] = temp;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout<<a[i];
//     }
// }