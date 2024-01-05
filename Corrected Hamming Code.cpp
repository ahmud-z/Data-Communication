#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
    int a, b, c[30], d, r = 0, d1; //Max bits is 30
    cout<<"Enter the length of data bits: ";
    cin>>a;
    while (a + r + 1 > pow (2, r))
    {
        r++;
    }
    cout <<"data bits added:"<<r<<":Total Bits:"<<a+r<<endl;
    cout <<"Enter Data Bits One by One :" << endl;
    for (int i = 0; i<a;++i)
    {
        cin >> c[i];
    }
    int data[a + r];
    d = 0;
    d1 = 0;
    for (int i = 0; i < a + r; i++)
    {
        if ((i+1) == pow (2, d))
        {
            data[i] = 0;
            ++d;
        }else
        {
            data[i] = c[d1];
            ++d1;
        }
    }

    cout << "Data Bits are Encoded with Parity bits(0): ";
    for (int i = 0; i < a + r; ++i)
    {
        cout << data[i] << " ";
    }
    d1 = 0;

//Parity Bit Calculation
    cout<<endl;
    for(int k=0; k<r; k++)
    {
        int cnt=0;

        int ind=pow(2,k);

        for(int kk=ind; kk<r+a; kk++)
        {
            int vl= (kk+1)^ind;
            if(kk+1-vl==ind)
            {
                if(data[kk]==1) cnt++;
            }
        }
        cout<<ind<<" "<<cnt<<endl;

        if(cnt%2==0)
        {
            data[ind-1]=0;
        }else
        {
            data[ind-1]=1;
        }
    }
    cout<<"Hamming codeword bits for even parity are: ";
    for (int i = 0; i < a + r; ++i)
    {
        cout<<data[i] << " ";
    }
    cout<<endl;
}
