#include <cstdio>

int& f(int& i){
    return ++i;
}

int main(){
    int i = 5;
    printf("f(i) is %d\n", f(i));
    printf("i is %d\n", i);
    return 0;
}