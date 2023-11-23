#include<iostream>
using namespace std;

void printResult(int resultArray[], int sz)
{
    for(int j = sz-1; j>=0; j--)
    {
        cout<<resultArray[j];
    }
}

void convert_into_binary(int num)
{
    int resultArray[100] = {0};

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

    printResult(resultArray, i);
}

int main()
{
    int num;

    cout<<"Enter a Decimal Number: ";
    cin>>num;

    cout<<"\nBinary of "<<num<<" is: ";
    convert_into_binary(num);

    cout<<"\n";
    return 0;
}
