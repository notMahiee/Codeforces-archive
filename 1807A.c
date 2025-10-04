#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while (t--){
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
          int s = a+b;
          int p = a-b;
          if (s == c){
            printf(" + \n");
        } 
      else if (p==c){
        printf(" - \n");}
    }
    return 0;
}
