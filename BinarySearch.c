#include <stdio.h>

int main()
{
    int a[10],n,search,i,middle,first,last;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("Enter %d elements",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element whhich you want to search");
    scanf("%d",&search);
    first=0;
    last=n-1;
    middle=(first+last)/2;
    while(first<=last)
    {
        if(a[middle]>search)
        {
            first=middle+1;
        }
        else if(search>a[middle]){
            last=middle-1;
        }
        else if(a[middle]=search){
            printf("your search element %d found at the location of %d",search,a[middle]+1);
            break;
        }
    }
    

    return 0;
}
