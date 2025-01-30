#include <iostream>
using namespace std;
// int home(int str,int dest)
// {
//     if (str==dest)
//     {
//         return dest;
//     }
//     return str = home(str+1,dest);
// }
// int main()
// {
//     int dest = 10;
//     int str = 1;
//     str = home(str,dest);
//     if (str==dest)
//     {
//         cout<<"reached home!";
//     }
//     else
//     {
//         cout<<"not reached yet!";
//     }
    
    
//     return 0;
// }
void home(int str,int dest)
{
    if(str==dest)
    {
        cout<<"reached home"<<endl;
        return ;
    }
    home(str+1,dest);
}
int main()
{
    int dest=15;
    int str = 1;
    home(str,dest);
    return 0;
}