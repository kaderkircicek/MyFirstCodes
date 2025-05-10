#include <stdio.h>
#include <stdlib.h>

int main()
{
    int yaricap ;
    printf("yaricapi giriniz\n");
    scanf ("%d", &yaricap);

    float daireninalani= (3.14*(yaricap*yaricap));
    float dairenincevresi= (2*3.14*yaricap);
    printf("dairenin alani: %.2f'dir\n", daireninalani);
    printf ("dairenin cevresi: %.2f'dir\n", dairenincevresi);
    return 0;
}
