#include <stdio.h>
int main(){
    char month[3][4] = {"Jan\0","Feb\0","Mar\0"};
    int i=0;
    for (i=0;i<3;i++){
        printf("%s ",month[i]);
    }
    return 0;
}