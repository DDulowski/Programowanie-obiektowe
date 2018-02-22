#include <stdio.h>
typedef struct{
    unsigned int a,b,c;
}trojkat;

int obwod(trojkat n){
    return n.a+n.b+n.c;
}

void fun(trojkat troj1, trojkat *troj2){
    *troj2=troj1;
}

int main()
{
    trojkat n={4,5,6};
    trojkat m={10,15,30};
    printf("%d\n",obwod(m));
    fun(n,&m);
    printf("%d\n",obwod(m));
    return 0;
}
