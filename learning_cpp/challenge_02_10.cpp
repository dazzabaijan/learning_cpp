// Challenge 02_10
// Calculate an average

#include <iostream>

using namespace std;

int main(){
    int nums[5] = {1, 23, 32, 24, 337};
    float result;

    result = nums[0]+nums[1]+nums[2]+nums[3]+nums[4];
    result /= 5;
    /* No need to cast elements of nums or their sums to float
       because I'm assigning this sum to a float anyway*/
    // Alternative: result = (nums[0]+nums[1]+nums[2]+nums[3]+nums[4])/5.0;

    cout << "The average is " << result << endl;

    return (0);
}