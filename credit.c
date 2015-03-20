#include <stdio.h>
#include <cs50.h>
#include <math.h>


int checkSum(int sz, long long ccNum);
int main (void)
{
    long long cardNum = 0;
    int check = 0;

    printf("Enter Credit Card Numper\n");
    cardNum = GetLongLong();
    
    if(cardNum > 339999999999999 && cardNum <350000000000000)
    {
        check = checkSum(15, cardNum);
        if(check == 0)
        {
            printf("AMEX\n");
        }
        else printf("INVALID\n");    
    }
    else if(cardNum > 369999999999999 && cardNum <380000000000000)
        {
        check = checkSum(15, cardNum);
        if(check == 0)
        {
            printf("AMEX\n");
        }
        else printf("INVALID\n");      
    }
    else if(cardNum > 5099999999999999 && cardNum <5600000000000000)
        {
        check = checkSum(15, cardNum);
        if(check == 0)
        {
            printf("MASTERCARD\n");
        }
        else printf("INVALID\n");      
    }
        else if(cardNum > 3999999999999999 && cardNum <5000000000000000)
        {
        check = checkSum(15, cardNum);
        if(check == 0)
        {
            printf("VISA\n");
        }
        else printf("INVALID\n");      
    }
            else if(cardNum > 3999999999999 && cardNum <5000000000000)
        {
        check = checkSum(15, cardNum);
        if(check == 0)
        {
            printf("VISA\n");
        }
        else printf("INVALID\n");      
    }
    else printf("INVALID\n"); 
}

int checkSum(int sz, long long ccNum)
{
    int sum = 0;
    int xtwo = 0;
    int xsum = 0;
    
    for(int i = 0; i < sz; i++)
    {
        sum = sum + ccNum % 10;
        ccNum = ccNum/10;
        xtwo = ccNum % 10;
        xtwo = xtwo * 2;
            for(int j = 0; j < 2; j++)
            {
                xsum = xsum + (xtwo % 10);
                xtwo = xtwo/10;
            }
        ccNum = ccNum/10;
    }
    //printf("%d\n", sum);
    //printf("%d\n", xsum);
    //printf("%d\n", xsum);
    return (sum + xsum) % 10;

}
