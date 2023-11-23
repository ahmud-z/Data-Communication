#include <stdio.h>
#include <string.h>

char data[100], div[20], temp[100], total[100];
int i, j, dataLen, divLen, len, flag = 1;

void check();

int main()
{
    printf("Enter the total bits of data: ");
    scanf("%d", &dataLen);
    printf("\nEnter the total bits of divisor: ");
    scanf("%d", &divLen);
    len = dataLen + divLen - 1;

    printf("\nEnter the data: ");
    scanf("%s", data);
    printf("\nEnter the divisor: ");
    scanf("%s", div);

    for (i = 0; i < dataLen; i++)
    {
        total[i] = data[i];
        temp[i] = data[i];
    }

    for (i = dataLen; i < len; i++)
        total[i] = '0';

    check();

    for (i = 0; i < divLen; i++)
        temp[i + dataLen] = data[i];

    printf("\nTransmitted Code Word: %s\n\n", temp);

    printf("Enter the received code word: ");
    scanf("%s", total);

    check();

    flag = 1;
    for (i = 0; i < divLen - 1; i++)
    {
        if (data[i] == '1')
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        printf("\nSuccessful!\n");
    else
        printf("\nReceived code word contains errors...\n");

    return 0;
}

void check()
{
    for (j = 0; j < divLen; j++)
        data[j] = total[j];

    while (j <= len)
    {
        if (data[0] == '1')
        {
            for (i = 1; i < divLen; i++)
                data[i] = ((data[i] == div[i]) ? '0' : '1');
        }
        for (i = 0; i < divLen - 1; i++)
            data[i] = data[i + 1];
        data[i] = total[j++];
    }
}
