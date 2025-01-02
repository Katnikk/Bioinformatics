#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
int i; 
int len;

char* seq;


scanf("%s", seq); 
len = strlen(seq);

for ( i=0 ; i<len ; i++ )
	{


		if ( seq[i]=='D'|| seq[i]=='E' || seq[i]=='H' || seq[i]=='K' || seq[i]=='N' || seq[i]=='Q' || seq[i]=='R')
			{
		          seq[i]= ' ' ;
			}

		 if ( seq[i]=='S'|| seq[i]=='T' || seq[i]=='G')
                         {
                          seq[i]= '.' ;
                        }
		 if ( seq[i]=='A'|| seq[i]=='C' || seq[i]=='M' || seq[i]=='P' )
                        {
                          seq[i]= ':';
                        }
 		if ( seq[i]=='F'|| seq[i]=='I' || seq[i]=='L' || seq[i]=='V' || seq[i]=='W' || seq[i]=='Y')
                        {
                          seq[i]= '*' ;
                        }



	}

	printf("%s \n", seq);

}

