// 02_04_pointToPointer.cpp

#include <iostream>

using namespace std;


int main(){
    // int num = 10;
    // int* pNum = &num;
    // int** p2Num = &pNum;

    // cout << "Addres of num: " << &num << endl;
    // cout << "Address stored in pNum: " << pNum << endl;
    // cout << "Address of pNum: " << &pNum << endl;
    // cout << "Address stored in p2Num: " << p2Num << endl;

    int testScores[5]{100, 95, 99, 85, 83};
    int* pointerArray[5];
    for (int i=0; i<5; i++){
        pointerArray[i] = &(testScores[i]);
        // cout << pointerArray[i] << endl;

        // dereference pointers to get values
        // cout << *(pointerArray[i]) << endl;

        // similarly we can use *(name of pointer + i)
        // which will get us addresses of each individual pointers
        cout << *(pointerArray + i) << endl;
        cout << pointerArray + i << endl;
        // to dereference addresses of each pointers element
        // use **
        cout << **(pointerArray + i) << endl;
    }

    return 0;
}