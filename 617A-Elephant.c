#include <stdio.h>

int main() 
{
    int x;
    scanf("%d", &x);
    int steps = 0;
    int position = 0;

    while (position < x) {
        if (x - position >= 5)
            position += 5;
        else if (x - position >= 4)
            position += 4;
        else if (x - position >= 3)
            position += 3;
        else if (x - position >= 2)
            position += 2;
        else
            position += 1;

        steps++;
    }
    printf("%d\n", steps);
    
    return 0;
}
