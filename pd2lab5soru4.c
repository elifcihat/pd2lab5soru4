

#include <stdio.h>
#include <string.h>

/*- Bir iþaretçi kullanarak dizenin uzunluðunu hesaplayan C'de bir program yazýn
Test verisi :
Bir dize girin: w3resource
Beklenen çýktý :
Verilen dizginin uzunluðu w3resource
: 10
*/


int main(){
    
   // char dizi[100]="esselamu aleyke";
//printf("%d",strlen(dizi));

    char dizi[100];
    char *ptr;

    ptr=dizi;
    printf("lutfen kelime girin:  ");
    gets(ptr);
    printf("%d",strlen(ptr));
	
 
 return 0;
}
