#include<stdio.h>
void print_b(int i){
    for(unsigned int a = 1<<31;a > 0;a = a/2){
        (i&a)? printf("1") : printf("0");
    }
    printf("\n");
}
int main(int i, char* b[]){
    if(i == 1){
        printf("kindly give input in 'binary <x>' format\n"
        "where x is the number you want to convert");
        return 0;
    }
    int convert_int = 0;
    sscanf(b[1],"%d", &convert_int);
    printf("binary of %d is:",convert_int);
    print_b(convert_int);

}