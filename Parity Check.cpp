#include<iostream>
using namespace std;

void printArray(int arr[], int sz)
{

    for(int i = 0; i<sz; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void checkEvenParity(int arr[], int sz)
{
    int temp = 0;

    for(int i = 0; i<sz-1; i++)
    {
        if(arr[i]==1)
        {
            temp++;
        }
    }

    if(temp%2==0)
    {
        cout<<"Parity bit will be added: 0"<<endl;
        arr[sz-1] = 0;
        cout<<"Even Parity Final Result: ";
        printArray(arr,sz);
        cout<<endl;
    }
    else
    {
        cout<<"Parity bit will be added: 1"<<endl;
        arr[sz-1] = 1;
        cout<<"Even Parity Final Result: ";
        printArray(arr,sz);
        cout<<endl;
    }
}

void checkOddParity(int arr[], int sz)
{
    int temp = 0;
    for(int i = 0; i<sz-1; i++)
    {
        if(arr[i]==1)
        {
            temp++;
        }
    }

    if(temp%2==0)
    {
        cout<<"Parity bit will be added: 1"<<endl;
        arr[sz-1] = 1;
        cout<<"Odd Parity Final Result: ";
        printArray(arr,sz);
        cout<<endl;
        cout<<endl;
    }
    else
    {
        cout<<"Parity bit will be added: 0"<<endl;
        arr[sz-1] = 0;
        cout<<"Odd Parity Final Result: ";
        printArray(arr,sz);
        cout<<endl;
        cout<<endl;
    }
}

int main()
{
    int option = 0;
    int sz;

    cout<<"Enter array size: ";
    cin>>sz;

    int arr[sz];


    cout<<"Enter "<<sz-1<<" array elements: ";
    for(int i = 0; i<sz-1; i++)
    {
        cin>>arr[i];
    }

    cout<<"\n1. Even Parity Check"<<endl;
    cout<<"2. OddParity Check"<<endl;
    cout<<"Enter your option: ";

    cin>>option;

    if(option==1)
    {
        cout<<endl;
        checkEvenParity(arr,sz);
    }
    else
    {
        cout<<endl;
        checkOddParity(arr,sz);
    }

    return 0;
}
