#include <cstdio>
int main () {
    int h,r,a;
    scanf("%d%d",&r,&h);
    a=h/r*2;int t=h%r;
    if(t*2>=r){
        a+=2;
        if(1LL*t*t*4>=3LL*r*r)a++;
    } else a++;
    printf("%d\n",a);
    return 0;
}
