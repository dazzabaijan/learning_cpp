// Learning C++
// Exercise 04_03
// While Loops

#include <iostream>
#include <vector>

using namespace std;

vector<int> numbers = {12, 25, 31, 47, 58};

int main(){
    // vector<int>::iterator ptr = numbers.begin();
    auto ptr = numbers.begin();

    while (ptr != numbers.end()){
        cout << *ptr << " ";
        ptr = next(ptr, 1);
    }
    cout << endl;

    int i = 0;
    do{
        cout << numbers[i] << " ";
        i++;
    } while (i < numbers.size());
    cout << endl;
    
    return (0);
}