#include<stdio.h>
#include<math.h>

int main()
{

    //freopen("input.txt", "r", stdin);
   //freopen("output.txt", "w", stdout);

   double a,a2,a3,t,l,m  , w, r,i;
    a = a3 = a2 = w = r = m = 0;

    scanf("%lf",&t);

   for(i = 0 ;i < t; i++){
    scanf("%lf",&l);

    m = (l / 10);
    w = m * 6;
    r = m * 2;

    a = l * w;
    a2 = acos(-1) * r * r;
    a3 = a - a2;

    printf("%.2lf %.2lf\n",a2,a3);
    }

   return 0;
}

