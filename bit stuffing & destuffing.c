#include<stdio.h>
#include<string.h>

void bitStuffing(int arr[], int sz)
{

    int resultArr[30];
    int i,j = 0;
    int k;

    int count = 1;

    while(i<sz)
    {
        if (arr[i] == 1)
        {
            resultArr[j] = arr[i];

            for(k = i+1; arr[k] == 1 && k<sz && count<5; k++)
            {
                j++;
                resultArr[j] = arr[k];
                count++;

                if(count==5)
                {
                    j++;
                    resultArr[j] = 0;
                }
                i = k;
            }
        }
        else
        {
            resultArr[j] = arr[i];
        }
        i++;
        j++;
    }

    printf("\nResult Array: \n");
    for(int x = 0; x<j; x++)
    {
        printf("%d ",resultArr[x]);
    }
    printf("\n");
}


void bitDeStuffing(int arr[], int sz)
{
    int deStuffArr[30];
    int i,j = 0;
    int k;

    int count = 1;

    while(i<sz)
    {
        if (arr[i] == 1)
        {
            deStuffArr[j] = arr[i];

            for(k = i+1; arr[k] == 1 && k<sz && count<5; k++)
            {
                j++;
                deStuffArr[j] = arr[k];
                count++;

                if(count==5)
                {
                    k++;
                }
                i = k;
            }
        }
        else
        {
            deStuffArr[j] = arr[i];
        }
        i++;
        j++;
    }

    printf("\nResult Array: \n");
    for(int x = 0; x<j; x++)
    {
        printf("%d ", deStuffArr[x]);
    }
    printf("\n");
}


int main()
{
    int sz;

    printf("Enter array size: ");
    scanf("%d",&sz);

    int arr[sz];

    printf("Enter array elements: ");

    for(int i = 0; i<sz; i++)
    {
        scanf("%d",&arr[i]);
    }

    int choice;

    do
    {
        printf("\n1.Stuffing\n2.deStuffing\n0.exit\n");
        printf("Enter your Choice: ");
        scanf("%d",&choice);


        switch(choice)
        {
        case 0:
            return 0;
            break;

        case 1:
            bitStuffing(arr,sz);
            break;

        case 2:
            bitDeStuffing(arr,sz);
            break;

        default:
            printf("Invalid input");
        }
    }
    while(choice!=0);

    return 0;
}
