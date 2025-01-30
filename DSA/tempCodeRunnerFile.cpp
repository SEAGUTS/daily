for ( i = 0,j = n-1; i < n/2 , j >= n/2; i++,j--)
    {
        if (a[i]!=a[j])
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
    