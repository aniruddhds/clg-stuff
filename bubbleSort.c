#include<stdio.h>
void bubSort(int ar[],int);

void bubSort(int ar[], int n)
{
    int temp;
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(ar[j]>ar[j+1])
            {
                temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
            }
        }
    }

}

int main() 
{
    int n;
    //enter size
    printf("enter size: ");
    scanf("%d",&n);

    int ar[n];
    //enter elements
    printf("enter elements of array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }

    bubSort(ar,n);

    printf("the sorted array: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
    }
    return 0;
}