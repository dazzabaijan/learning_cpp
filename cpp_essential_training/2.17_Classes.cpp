#include <cstdio>

class C {
    int i = 0;
public:
    void setvalue(int value){
        i = value;
    }
    int getvalue(){
        return i;
    }
};

int main(){
    int i = 47;
    C o1;

    o1.setvalue(i);
    printf("value is %d\n", ol.getvalue());
    return 0;
}