#include<stdio.h>
void toggle_bit(int *var, int bit){
    int temp = *var;
    *var = temp ^ 1 << bit;
}
void set_bit(int *var, int bit){
    *var = *var | 1 << bit;
}
void remove_bit(int *var, int bit){
    *var = *var & ~(1 << bit);
}
int get_bit(int *var, int bit){
    int temp = *var & 1 << bit;
    (temp)? temp = 1 : 0;
    return temp;
}

int main(){
    int var = 0;
    int bit = 0;

    printf("enter a digit and bit to manipulate in format x y:");
    scanf("%d %d",&var,&bit);

    toggle_bit(&var,bit);
    printf("toggle_bit:%d\n",var);

    set_bit(&var,bit);
    printf("set_bit:%d\n",var);

    remove_bit(&var,bit);
    printf("remove_bit:%d\n",var);

    
    printf("get_bit:%d\n",get_bit(&var,bit));
}