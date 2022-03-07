#include <cstdio>


class S {
public:
    int static_value(){
        static int x = 7;
        return ++x;
    }
};

int func(){
    int x = 7;
    return ++x;
}

int func2(){
    static int x = 7;
    return ++x;
}

int main(){
    int i = func();
    i = func();
    i = func();
    printf("The integer is %d\n\n", i);

    int j = func2();
    j = func2();
    j = func2();
    printf("The integer is %d\n\n", j);

    S s1;
    S s2;
    S s3;
    printf("The integer is %d\n", s1.static_value());
    printf("The integer is %d\n", s2.static_value());
    printf("The integer is %d\n", s3.static_value());
    return 0;
}