#include <stdio.h>
#include <stdlib.h>

int ft_putchar(char c){
    write(1, &c, 1);
    return 0;}
void ft_print_alphabet(void){
    char a;
    char b;
    a = 'a';
    b = 'z';
    while(a <= b){
        ft_putchar(a);
        a = a + 1;}}
int main(){
    ft_print_alphabet();
    return 0;}
