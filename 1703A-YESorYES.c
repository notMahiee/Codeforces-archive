#include <stdio.h>
 
int main()
{
    int t;
    scanf("%d", &t);
    while(t--){
        char s[4];
        scanf("%s", s);
        int flag = 1;
 
        if(s[0] != 'y' && s[0] != 'Y'){
            flag = 0;
        }
        else if(s[1] != 'e' && s[1] != 'E'){
            flag = 0;
        }
        else if(s[2] != 's' && s[2] != 'S'){
            flag = 0;
        }
        if(flag == 0){
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }
    }
}
