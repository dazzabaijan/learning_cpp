#include <cstdio>

class C1 {
    int i = 0;
public:
    void setvalue( int value);
    int getvalue();
};

void C1::setvalue(int value) {
    i = value;
}

int C1::getvalue() {
    return i;
}

int main(){
    int i = 47;
    C1 o1;

    o1.setvalue(i);

    const C1 o2 = o1;

    printf("value is %d\n", o1.getvalue());
    printf("value is %d\n", o2.getvalue());
    return 0;
}