x#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
int i; 
int len;
float con;
float finalcon;
char seq[5000];
finalcon=0;

scanf("%s", seq);
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

}

