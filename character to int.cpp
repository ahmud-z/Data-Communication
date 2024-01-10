#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    string str_data;
    int sum = 0;

    cout<<"Enter Data: ";
    cin>>str_data;

    for(int i = 0; str_data[i]!='\0'; i++)
    {
        sum+= str_data[i] - '0';
    }

    cout<<"\nSum of Given Data: "<<sum<<endl;

    return 0;
}
