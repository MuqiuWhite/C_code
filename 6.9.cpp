#include <stdio.h>
int main()
{
     int a = 0; 
    int b = 0, s = 0;
    int c=0;

    scanf("%d", &a);

    while (a--)
    {
        scanf("%d", &b);
        s = 0;
        while (b--);
        {
            scanf("%d", &c);
            s += c;
        }
        printf("%d\n", s);

    }
return 0;
}
