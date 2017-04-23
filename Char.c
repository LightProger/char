#include <stdio.h>


int main() {
    int s;
    printf("Enter char:");
    s = getchar();
    if(s >= 'A' && s <='Z')
    {
     s = s + ('a' - 'A');
        printf("%c",s);
    }
    else if (s>='a' && s <='z')
    {
        s = s + ('A'-'a');
        printf ("%c", s);
    }

    printf("\n");
    return 0;
}