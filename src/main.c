#include <stdio.h>
#include <stdlib.h>
struct Point {
    int x;
    int y;
} ;
int main(){
    struct Point pts;
    int size = 10 * sizeof(pts);
    int *p = (int*) malloc(size);
    for (int i = 0; i < 2*10;i++){
        p[i] = i;
        printf("%d", p[i]);
    }
    struct Point *pt = (struct Point *) p;
    printf("a");
}