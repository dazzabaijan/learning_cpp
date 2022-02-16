// 03_02_passingPtrs.cpp

#include <iostream>

using namespace std;

// count as value
double averageCost(double* priceArray, int count){
    double sum = 0;
    for (int i=0; i<count; i++){
        // dereferencing gives value in array
        // at the location
        sum += *(priceArray + i);
    }
    return sum/count;
}

int main(){
    double prices[5]{5.00, 4.50, 3.75, 3.10, 6.75};
    double average = averageCost(prices, 5);
    cout << "$" << average << endl;

    return 0;
}


// count as pointer
double averageCost(double* priceArray, int* count){
    double sum = 0;
    for (int i=0; i<*count; i++){
        // dereferencing gives value in array
        // at the location
        sum += *(priceArray + i);
    }
    return sum/ *count;
}

int main(){
    double prices[5]{5.00, 4.50, 3.75, 3.10, 6.75};
		int quantity = 5;
    double average = averageCost(prices, &quantity);
    cout << "$" << average << endl;

    return 0;


// what if we change the value of count in function?
double averageCost(double* priceArray, int* count){
    double sum = 0;
    for (int i=0; i<*count; i++){
        sum += *(priceArray + i);
    }
		double avg = sum / *count;
		*count += 5;
		cout << "In function count value: " << *count << endl;
    return avg;
}


int main(){
    double prices[5]{5.00, 4.50, 3.75, 3.10, 6.75};
		int quantity = 5;
    double average = averageCost(prices, &quantity);
    cout << "$" << average << endl;
		cout << "quantity value: " << quantity << endl;
    return 0;
}