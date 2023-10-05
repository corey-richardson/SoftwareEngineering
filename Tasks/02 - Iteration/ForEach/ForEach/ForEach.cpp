#include <iostream>

int main()
{
    int arr[10] = { 10, 20, 30, 40, 50 };
    for (int elem : arr) {
        std::cout << elem << "\n";
    }
}
