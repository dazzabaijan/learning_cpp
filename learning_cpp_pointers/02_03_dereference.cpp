// 02_03_dereference.cpp

#include <iostream>
using namespace std;

int main(){
    double testScores[5], sum=0;
    double* pTestScores;
    pTestScores = testScores;
    for (int i=0; i<5; i++){
        cout << "Enter the test score: " << endl;
        // dereferencing pointers to get the value
        // at that array position
        cin >> *(pTestScores + i);
        sum += *(pTestScores + i);
    }
    cout << "testScores: " << testScores << endl;
    cout << "Total for all students: " << sum << endl;
    cout << "Average score: " << sum / 5 << endl;

    return 0;
}