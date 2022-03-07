#include <cstdio>

void func(){
    puts("this is func()");
}

int main(){
    puts("this is main()");
    void (*pfunc)() = func;
    (*pfunc)();
    return 0;   
}