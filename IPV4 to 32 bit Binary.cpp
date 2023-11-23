#include<iostream>
#include<stdio.h>

using namespace std;

void printResult(int arr[], int sz)
{
    for(int i = sz-1; i>=0; i--)
    {
        cout<<arr[i];
    }
    cout<<" ";
}

void Convert_Into_BinaryConvert(int num)
{
    int resultArray[8] = {0};

    int i = 0;

    while(num!=0)
    {
        if(num!=0)
        {
            resultArray[i] = num%2;
            i++;
        }
        num = num/2;
    }


    printResult(resultArray, 8);
}




int main()
{

    int a,b,c,d;


    cout<<"Enter a Dotted IPV4 Address: ";
    scanf("%d.%d.%d.%d.", &a, &b, &c, &d);

    int addressArray[] = {a, b, c, d};

    cout<<endl;

    cout<<"32 Bit Binary IP of Given Address: ";
    for(int i = 0; i<4; i++)
    {
        Convert_Into_BinaryConvert(addressArray[i]);
    }



    cout<<endl;

    return 0;
}
