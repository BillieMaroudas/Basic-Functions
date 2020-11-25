
/*
* C program that will print out all the permutations of a word
*/

# include<stdio.h>
# include<string.h> 
 
/* Function that swaps the values of two pointers */
void swap (char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

/*  Function that prints out the permutations of a word*/
void permute(char *a, int i, int n)
{
    int j;
    if (i == n)
        printf("%s\n", a);
    else {
        for (j = i; j <= n; j++)
        {
            swap((a + i), (a + j));
            permute(a, i + 1, n);
            swap((a + i), (a + j));
        }
    }
}


void cstrip(FILE *infile, FILE *outfile)
{
        
	char str[80];
	int n;
	        
        if (!infile || !outfile || (infile == outfile)) {
                return;
        }

	while (fscanf(infile,"%s",str) != EOF) {
		n = strlen(str);
		if (n > 50)
        		printf("\nThe word must be 50 characters or less.\n");
    		else {
    			printf("\n");
			printf("Permutations:\n"); 
    			permute(str, 0, n - 1);
            			
        	}
	}

}

/*  The main() function*/
int main(void)
{
    cstrip(stdin, stdout);

    return 0;
}
