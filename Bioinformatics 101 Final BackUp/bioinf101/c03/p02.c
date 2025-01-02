#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
int i;
int len;
float con;
float finalcon;
char seq[5000];

con=0;

while ( scanf("%s", seq) == 1 )
{
	 len = strlen(seq);

   	 for ( i=0 ; i<len ; i++ )
		{
		 if ( seq[i]=='G'|| seq[i]=='C')
			{
				con++;
			}
		}

	finalcon = (con/len)*100;
	printf("The final concentration is %f%% \n",finalcon);
	con=0;
}
}

