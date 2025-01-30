#include <stdio.h>
void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b= temp;
}
int partition(int a[],int s,int e)
{
    int pivot = a[s];
    int cnt = 0;
    for (int i = s+1; i <= e; i++)
    {
        if(a[i]<=pivot)
        {
            cnt++;
        }
    }
    //place pivot at right place
    int pivotindex = s + cnt;
    swap(&a[pivotindex],&a[s]);

    //left and right part
    int i = s;
    int j = e;
    while(i<pivotindex && j>pivotindex)
    {
        while (a[i]< pivot)
        {
            i++;
        }
        while (a[j]> pivot)
        {
            j--;
        }
        if (i<pivotindex && j>pivotindex)
        {
            swap(&a[i++],&a[j--]);
        }
    }
    return pivotindex;
}
void quicksort(int a[],int s,int e)
{
    //base case
    if(s>=e)
    {
        return;
    }
    //partition
    int p;
    p = partition(a,s,e);
    //left part sort
    quicksort(a,s,p-1);
    //right part sort
    quicksort(a,p+1,e);
}

void main() //calling funtion 
{
    int a[]={7,1,4,6,2,8};
    int n=sizeof(a)/sizeof(a[0]);
    quicksort(a,0,n-1);
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
}