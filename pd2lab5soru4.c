

#include <stdio.h>
#include <string.h>

/*- Bir i�aret�i kullanarak dizenin uzunlu�unu hesaplayan C'de bir program yaz�n
Test verisi :
Bir dize girin: w3resource
Beklenen ��kt� :
Verilen dizginin uzunlu�u w3resource
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
