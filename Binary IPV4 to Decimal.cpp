#include<iostream>
#include<math.h>
#include<stdio.h>

using namespace std;

void convertIntoBinary(int num)
{
    int sum = 0;
    int x = 0;
    int powerResult = 0;
    int temp = 0;

    while(num!=0)
    {
        int powerResult = pow(2, x);

        int temp = num%2;
        sum += (temp * powerResult);

        x++;
        powerResult = 0;
        num = num/10;
        temp++;
    }

    cout<<sum;
    sum = 0;
}

int main()
{
    int a,b,c,d;

    cout<<"Enter an 32 bit Dotted Binray address (e.g. 10101101.): ";
    scanf("%d.%d.%d.%d", &a, &b, &c, &d);

    int arr[] = {a, b, c, d};

    cout<<"\nDecimal address of given address: ";
    for(int i = 0; i<4; i++)
    {
        convertIntoBinary(arr[i]);
        if(i != 3)
        {
            cout<<".";
        }
    }
    cout<<endl;
    return 0;
}
