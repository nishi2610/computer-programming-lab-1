#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int c_a = 0,c_e = 0,c_i = 0,c_o = 0,c_u = 0;
    printf("Enter a string: ");
    gets(str);
    strlwr(str);
    for(int i=0; str[i]!=0;i++){
        switch(str[i]) {
            case 'a': c_a++;
                break;
            case 'e': c_e++;
                break;
            case 'i': c_i++;
                break;
            case 'o': c_o++;
                break;
            case 'u': c_u++;
                break;}
    }

    printf("Vowel Frequencies:\n");
    printf("A/a: %d\n", c_a);
    printf("E/e: %d\n", c_e);
    printf("I/i: %d\n", c_i);
    printf("O/o: %d\n", c_o);
    printf("U/u: %d\n", c_u);
    return 0;
}
