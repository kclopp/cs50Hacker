#include <stdio.h>
#include <cs50.h>

int printPara(int i);
int printHash(int i);
int spaces[0];
int hashes[0];

int main(void)
{
    // var for number of hashes
    int hash = 1;
    // var for number of spces
    int spaces = 0; 
    // size of paramid
    int paraSize = 0; 
    
    
    // loop get's int between 1 and 23
    do 
    {
        printf("Please enter a number between 0 and 23 ");
        paraSize = GetInt();
    }
    while (paraSize < 0 || paraSize > 23);
    
    
    // do loop that takes in the paraSize and creates the paramid
    do
    {
        // this if statment fixes a bug for 
        if (paraSize == 0) 
        {            
            break;
        }      
        // loop to print out the spaces before passing to the hash loop
        while(hash + spaces < paraSize)
        {
            printf(" ");
            spaces++;
        }
        // reset hash to 1 before entering hash loop
        hash = 1; 
        
         
        // loop to print out the hashes
        while(hash + spaces < paraSize + 1)
        {
            printf("#");
            hash++;
        }
       
        // reset spaces to 0 before starting the do loop again
        spaces = 0; 
        // print right most # and then drop to next line
        printf("  "); 
        for (int i = 1; i < hash; i++)
        {
            printf("#");
        }
        printf("\n");
        
    }
    // condition for exiting the do loop
    while(hash < paraSize + 1); 
    
    return 0;
    

    
}
