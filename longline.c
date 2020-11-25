/*--------------------------------------------------------------------- 
---- 
# Student's Name:

# Assignment #1 Part ()

# Lab Section:

# TA's Name: (for the lab group above)
# CMPUT 201, Class Section:

# Instructor's Name: (for section above) 
*-----------------------------------------------------------------------*/ 

/*
* C program that echoes all input lines that are longer than 40 characters
*/

#include <stdio.h>

void cstrip(FILE *infile, FILE *outfile)
{
 	char buffer[1000];
    		

	if (!infile || !outfile || (infile == outfile)) {
                return;
        }

	while (fgets ( buffer, sizeof(buffer), infile ) != NULL ) {
		int n = 0;
 
    		while (buffer[n] != '\0')
      			n++;
 
 		if (n>40){
		printf("%s",buffer);}


	 
            
    	}
}


/*  The main() function*/
int main(void)
{
    cstrip(stdin, stdout);

    return 0;
}