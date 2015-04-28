#include <stdio.h>
int main(){
    char month[12][4] = {"Jan\0","Feb\0","Mar\0","Apr\0","May\0","Jun\0","Jul\0","Aug\0","Sep\0","Oct\0","Nov\0","Dec\0"};
    int i=0;
    for (i=0;i<12;i++){
        printf("%s ",month[i]);
    }
    return 0;
}
