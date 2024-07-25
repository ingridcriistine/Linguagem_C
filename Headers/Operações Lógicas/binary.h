#include <stdio.h>  
#ifndef Binary_H  
#define Binary_H  
 
int and(int n1, int n2) {     
    return n1 & n2;
}

int or(int n1, int n2) {     
    return n1 | n2;
}

int nand (int n1, int n2) {
    return ~(n1 & n2);
}

int nor (int n1, int n2) {
    return ~(n1 | n2);
}

int xor (int n1, int n2) {
    return (n1 ^ n2);
}

int not(int n1) {     
    return ~n1;
}

#endif
