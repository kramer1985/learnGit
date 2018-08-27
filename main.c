#include <stdio.h>
#include <string.h>
#include "proto.h"

int a = 20;
int adresse = 123;
int valeur = 400;


int main ()
{
char* ptr= "bonjour";
char* tabptr[]={"test", "coucou", "informatique", "linux"};

printf("this a code to learn git :)\n");
printf("We want to create a patch and apply it to another branch :) \n");
printf("We also want to squash if needed \n");
	send_data(adresse, valeur);
	printf("valeur : %d\n", send_data(adresse, valeur));
	printf("valeur : %d\n", a);
	printf("taille de ptr : %d\n", strlen(ptr));
	printf("taille de tabptr : %d\n", sizeof(tabptr));

return 0 ;
}
