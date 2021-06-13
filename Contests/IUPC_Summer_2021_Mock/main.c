#include<stdio.h>
# define PI           acos(-1)  /* pi */


int main(){
    int T;
    scanf("%d", &T);
    int i=0;
    for(i=0;i<T;i++){
        int D,K;
        scanf("%d%d", &D, &K);
        float dpi = (float)D/(2*PI);
        float obi = (float)1/(K-1);
        float r1 = dpi*obi;
        float r2 = dpi+dpi*obi;
        printf("%f", PI*r2*r2-PI*r1*r1);
        printf("\n");
    }

    return 0;
}
