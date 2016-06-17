#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // declare and intialize height
    int height;
    height = 0;
    
    {
    printf ("\n\nHey Grand Architect!\n\n");
    
    printf ("I shall build a glorious pyramid in your honor.\n\n");
    }

    // prompt for user input
    do 
    {
	printf ("How high of a pyramid would please you? ");
	height = GetInt();
	
	}
	//accepts only input in this range
    while (height < 0 || height > 23);

    
    for (int lines = 0; lines < height; lines++) 
    {
	// print spaces
	for (int spaces = 0; spaces < height - lines - 1; spaces++) 
	    {
	    printf(" ");
	    }
	// print hashes
	for (int hashes = 0; hashes < lines + 2; hashes++) 
	    {
	    printf("#");
	    }
	printf("\n");
    }
    return 0;
}