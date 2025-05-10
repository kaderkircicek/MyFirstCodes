#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");

    float a,b,c;
    float yuzey_alan;
    float hacim;
    float oran;

    printf("Lutfen dikdortgen prizmanin ayrit degerlerini giriniz:\n");
    printf("a:");
    scanf("%f" , &a);
    printf("b:");
    scanf("%f" , &b);
    printf("c:");
    scanf("%f" , &c);


    yuzey_alan = 2*(a*b+a*c+b*c);
    hacim = a*b*c;
    oran = yuzey_alan/hacim;

    printf("Dikdortgen prizmanin yuzey alani: %.2f'dir.\n",yuzey_alan);
    printf("Dikdortgen prizmanin hacmi: %.2f'dir.\n",hacim);
    printf("Dikdortgen prizmanin yuzey hacim orani : %.2f'dir.\n",oran);

    return 0;
}
