#include<iostream>
#include <cmath>
using namespace std;

void printResult(int sum)
{
    cout<<endl;
    cout<<"Decimal of given binary: "<<sum<<endl;
}

void convertIntoDecimal(int num)
{
    int sum = 0;

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

    printResult(sum);
}


int main()
{
    int num;

    cout<<"Enter a binary number: ";
    cin>>num;

    convertIntoDecimal(num);

    return 0;
}

