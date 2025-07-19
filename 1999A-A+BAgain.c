#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--){
        int n;
        scanf("%d", &n);
        int x = n/10;
        int y = n%10;
        int sum = x + y;
        printf("%d\n", sum);
    }
    return 0;
}