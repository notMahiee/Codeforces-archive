#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--){
        char a[11];
        scanf("%s", a);
        char c[]="codeforces";
        int count = 0;
        for (int i=0; i<10; i++){
            if (a[i] != c[i]){
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}