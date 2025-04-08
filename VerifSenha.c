#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main (void)
{

char palavra1[13], palavra2[13];
int C,letras,Maletra,Miletra,numero, comp;

printf("Informe a primeira palavra");
scanf("%12s",palavra1);
printf("\n");
printf("Informe a segunda palavra");
scanf("%12s",palavra2);
C = 0;
letras = 0;
Maletra = 0;
Miletra = 0;
numero = 0;
comp = strcmp(palavra1, palavra2);


if (comp = 0)
{
   while (C < strlen(palavra1))
   {
       if(isalpha(palavra1[C])!= 0)
	   {
	      letras = letras + 1;
		  if (isupper(palavra1[C])!=0)
		  {
			Maletra = Maletra + 1;
		  }
		    else
			 Miletra = Miletra + 1;
			
	   } 
	   else	
		if (isdigit(palavra1[C]) != 0) 
		{ 
			numero = numero + 1;
		}
	}
	if(C >= 6 && Maletra > 0 && Miletra > 0 && numero > 0)
	{
	 printf("\n");
	 printf("Nova senha OK");
	}
	else 
	{
	 printf("\n");
	 printf("Nova senha invalida");
	}
}
else
printf("\n");
printf("Nova senha invalida");
	 
	
	   
	  


}