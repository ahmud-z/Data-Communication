#include <iostream>
#include <string.h>

using namespace std;

void stuffDestuff(char data[])
{
    int i = 0, j = 0;

    char end_escape[] = "DLEETX", stuff_data[100], destuff_data[100];

    stuff_data[0] = 'D', stuff_data[1] = 'L', stuff_data[2] = 'E';
    stuff_data[3] = 'S', stuff_data[4] = 'T', stuff_data[5] = 'X';

    j = 6;

    while(data[i]!='\0')
    {
        if(data[i] == 'D' && data[i+1] == 'L' && data[i+2] == 'E')
        {
            stuff_data[j] = 'D', stuff_data[j+1] = 'L', stuff_data[j+2] = 'E';
            stuff_data[j+3] = 'D', stuff_data[j+4] = 'L', stuff_data[j+5] = 'E';

            j = j+6;
            i = i+3;
        }
        else
        {
            stuff_data[j++] = data[i++];
        }
    }

    stuff_data[j] = '\0';

    strcpy(destuff_data,stuff_data);
    strcat(stuff_data,end_escape);

    cout<<"\nAfter Character Stuffing: "<<stuff_data<<endl;

    i = 0;
    j = 6;


    while(destuff_data[j]!='\0')
    {
        if(destuff_data[j] == 'D' && destuff_data[j+1] == 'L' && destuff_data[j+2] == 'E' && destuff_data[j+3] == 'D' && destuff_data[j+4] == 'L' && destuff_data[j+5] == 'E')
        {
            destuff_data[i] = 'D';
            destuff_data[i+1] = 'L';
            destuff_data[i+2] = 'E';

            j = j+6;
            i = i+3;
        }
        else
        {
            data[i++] = destuff_data[j++];
        }
    }

    data[i] = '\0';

    cout<<"\n\nAfter De-stuffing: "<<data<<endl;

}


int main()
{
    char data[100];

    cout<<"Enter data in uppercase: ";
    scanf("%s", data);

    stuffDestuff(data);

    return 0;
}
