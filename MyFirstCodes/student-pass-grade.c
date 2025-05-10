#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");

    int vize=100;
    int vize2=70;
    int vize3=85;
    int gecme_notu= (vize+vize2+vize3)/3;



    printf ("ogrencinin sinav bilgileri verilmistir:\n");
    printf ("vize %d\n", vize);
    printf ("vize2 %d\n",vize2);
    printf ("final %d\n",vize3);
    printf ("20210286 nolu ogrencinin gecme notu: %d'dir.",gecme_notu);


    return 0;
}
