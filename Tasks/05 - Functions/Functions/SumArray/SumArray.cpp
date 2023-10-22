// SumArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

int sumArray(int* arr, int length);
int sumVector(vector<int> vec);

int main()
{
    int nums[10]    = { 12, 5, 77, 23, 102, 42, 98, 64, 17, 59 };
    vector<int> vec = { 12, 5, 77, 23, 102, 42, 98, 64, 17, 59 };

    int total = 0;
    // your code below here
    for (int elem : nums) {
        total += elem;
    }
    cout << "From main(): " << total << endl;
    cout << "From sumArray(): " << sumArray(nums, 10) << endl;
    cout << "From sumVector(): " << sumVector(vec) << endl;
}

int sumArray(int* arr, int length) {
    int total = 0;
    for (int i = 0; i < length; i++) {
        total += arr[i];
    }
    return total;
    
}

int sumVector(vector<int> vec) {
    int length = vec.size(); // Could be moved into the for expression for conciseness, but then the function would get called at each iteration.
    int total = 0;
    for (int i = 0; i < length; i++) {
        total += vec[i];
    }
    return total;

}