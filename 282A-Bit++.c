#include <stdio.h>
 
int main()
{
    int n, x = 0;
    char st[5];
    scanf("%d", &n);
 
    for(int i = 0; i < n; i++){
        scanf("%s", st);
        if(st[1] == '+'){
            x++;
        }
        else{
            x--;
        }
    }
    printf("%d\n", x);
    
    return 0;
}