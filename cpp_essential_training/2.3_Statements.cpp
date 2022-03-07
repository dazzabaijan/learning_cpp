#include <cstdio>

int main(){
    int x;
    x = 42;

    printf("x is %d\n", x);
    printf("x is %d\n", x = 73);
    char s[] = "String";
    for (int i = 0; s[i] != 0; ++i){
        printf("char is %c\n", s[i]);
    }
    for (char* cp = s; *cp != 0; ++cp){
        printf("char is %c\n", *cp);
    }
    return 0;
}