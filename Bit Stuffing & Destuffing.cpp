#include<iostream>

using namespace std;


void print_array(int arr[], int sz)
{

    for(int i = 0; i<sz; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


void bit_Destuffing(int data_array[], int data_length)
{

    int destuff_data[50];

    int i = 0;
    int j = 0;
    int k;

    int counts = 1;

    while(i<data_length)
    {


        if(data_array[i] == 1)
        {
            destuff_data[j] = data_array[i];


            for(k = i+1; data_array[k]==1 && k<data_length && counts<5; k++)
            {
                j++;
                destuff_data[j] = data_array[k];
                counts++;

                if(counts == 5)
                {
                    k++;
                }
                i = k;
            }
        }
        else
        {
            destuff_data[j] = data_array[i];
        }
        i++;
        j++;
    }

    cout<<"Destuffed Data Elements: ";
    print_array(destuff_data, j);


}


void bitStuffing(int data_array[], int data_length)
{

    int stuff_data[50];

    int i = 0;
    int j = 0;
    int k;

    int counts = 1;

    while(i<data_length)
    {


        if(data_array[i] == 1)
        {
            stuff_data[j] = data_array[i];


            for(k = i+1; data_array[k]==1 && k<data_length && counts<5; k++)
            {
                j++;
                stuff_data[j] = data_array[k];
                counts++;

                if(counts == 5)
                {

                    j++;
                    stuff_data[j] = 0;
                }
                i = k;
            }
        }
        else
        {
            stuff_data[j] = data_array[i];
        }
        i++;
        j++;
    }

    cout<<"Stuffed Data Elements: ";
    print_array(stuff_data, j);

}


int main()
{
    int data_length = 8;

    int choice = 0;
    int data_array[] = {1,1,1,1,1,0,1,1};


    cout<<"1. Bit Stuffing"<<endl;
    cout<<"2. Bit Destuffing"<<endl;
    cout<<"Enter a choice: ";
    cin>>choice;
    cout<<endl;





    if(choice == 1)
    {
        bitStuffing(data_array, data_length);
    }
    else if (choice == 2)
    {
        bit_Destuffing(data_array, data_length);
    }
    else
    {
        cout<<"Invalid Input"<<endl;
        return 0;
    }

    return 0;
}
