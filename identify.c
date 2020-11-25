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
* C program that determines if a potential identifier name is valid
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void cstrip(FILE *infile, FILE *outfile)
{
        
	char name[1000];
  	int i;
	int n;
	        
        if (!infile || !outfile || (infile == outfile)) {
                return;
        }

  	while (fscanf(infile,"%s",name) != EOF) {
		n = strlen(name);
		int result = 1;

  		/* check potential identifier against C keywords */
 		if (strcmp(name,"else") == 0 || strcmp(name,"enum") == 0 || strcmp(name,"extern") == 0
      		|| strcmp(name,"static") == 0 || strcmp(name,"sizeof") == 0 || strcmp(name,"short") == 0 
      		|| strcmp(name,"auto") == 0 || strcmp(name,"break") == 0 || strcmp(name,"case") == 0 
      		|| strcmp(name,"float") == 0 || strcmp(name,"int") == 0 || strcmp(name,"long") == 0 
      		|| strcmp(name,"volatile") == 0 || strcmp(name,"unsigned") == 0
      		|| strcmp(name,"register") == 0 || strcmp(name,"return") == 0 || strcmp(name,"signed") == 0 
      		|| strcmp(name,"default") == 0 || strcmp(name,"const") == 0 || strcmp(name,"double") == 0 
      		|| strcmp(name,"char") == 0 || strcmp(name,"continue") == 0 || strcmp(name,"do") == 0 
      		|| strcmp(name,"for") == 0 || strcmp(name,"if") == 0 || strcmp(name,"goto") == 0 
      		|| strcmp(name,"union") == 0 || strcmp(name,"void") == 0 || strcmp(name,"while") == 0 
      		|| strcmp(name,"struct") == 0 || strcmp(name,"switch") == 0 || strcmp(name,"typedef") == 0){
			
			/* switch result to 0 for invalid */
    			result = 0;

    			printf("\n");
			printf("It is invalid because it is a keyword in C.\n");
    

  		}

  		/* check string character by character for legal identifier characters */
  		for (i = 0; i < n; i++) {

    			if (isalpha((unsigned char)name[i])) {}
    			else if (isdigit((unsigned char)name[i])) {}
    			else if (name[i] == '_') {}
			else {
				printf("\nIt is invalid.\n");
      				break;
    			}
			
			if (i == (n-1) && result != 0) {
      				printf("\nIt is valid.\n");
						}
    			
    			
 		}
	}
}

/*  The main() function*/
int main(void)
{
    cstrip(stdin, stdout);

    return 0;
}