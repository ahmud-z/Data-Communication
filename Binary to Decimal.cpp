#include<iostream>
#include <cmath>
using namespace std;

int main()
{
    int num;
    int sum = 0;

    cout<<"Enter a binary number: ";
    cin>>num;

    int x = 0;
    int powerResult = 0;

    while(num!=0)
    {
        int powerResult = pow(2, x);

        int temp = num%2;
        sum += (temp * powerResult);

        x++;
        powerResult = 0;
        num = num/10;
    }


    cout<<endl;
    cout<<"Decimal of given binary: "<<sum<<endl;

    return 0;
}

