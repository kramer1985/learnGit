#include <stdio.h>
#include <string.h>

int a = 20;
int adresse = 123;
int valeur = 400;

unsigned int send_data(int entier, int entier2)
{
 int result = 0;
 result = entier + entier2;
 return result;
}

int main ()
{
char* ptr= "bonjour";
char* tabptr[]={"test", "coucou", "informatique", "linux"};

	send_data(adresse, valeur);
	printf("valeur : %d\n", send_data(adresse, valeur));
	printf("valeur : %d\n", a);
	printf("taille de ptr : %d\n", strlen(ptr));
	printf("taille de tabptr : %d\n", sizeof(tabptr));

return 0 ;
}
