#include <iostream>

template <typename T>
T maxof ( T a, T b) {
    return ( a > b ? a : b);
}

int main(){
    std::cout << maxof<int>(7, 9) << std::endl;
    return 0;
}
