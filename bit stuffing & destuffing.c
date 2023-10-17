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

    for(int x = 0; x<j; x++)
    {
        printf("%d ",resultArr[x]);
    }
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
    for(int x = 0; x<j; x++)
    {
        printf("%d ", deStuffArr[x]);
    }

}

int main()
{
    int sz = 7;
    int arr[] = {1, 1, 1, 1, 1, 0, 1};

    bitDeStuffing(arr,sz);

    int choice;


    do{
        printf("Enter choice")
    }


    return 0;
}
