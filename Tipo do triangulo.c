#include <stdio.h>
void main(){


    int ladoa, ladob, ladoc;
    printf("Insira o lado a: ");
    scanf("%d",&ladoa);
    printf("Insira o lado b: ");
    scanf("%d", &ladob);
    printf("Insira o lado c: ");
    scanf("%d", &ladoc);

    if(ladoa == ladob && ladob == ladoc){
        printf("Equilatero\n");
    }
    else if(ladoa != ladob && ladob != ladoc && ladoc != ladoa){
        printf("Escaleno\n");
    }
    else
        printf("Isosceles\n");
}
