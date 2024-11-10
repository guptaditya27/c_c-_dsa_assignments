#include <iostream>
#include <stdexcept>
using namespace std;

class Array {
private:
    int* data;
    int size;

public:
    // Constructor
    Array(int s) : size(s) {
        data = new int[size];
    }

    // Destructor
    ~Array() {
        delete[] data;
    }

    // Subscript operator for non-const objects
    int& operator {
        if (index < 0 || index >= size) {
            throw out_of_range("Index out of range");
        }
        return data[index];
    }

    // Subscript operator for const objects
    const int& operator const {
        if (index < 0 || index >= size) {
            throw out_of_range("Index out of range");
        }
        return data[index];
    }

    // Function to get the size of the array
    int getSize() const {
        return size;
    }
};

int main() {
    Array arr(5);

    // Assign values to the array
    for (int i = 0; i < arr.getSize(); ++i) {
        arr[i] = i * 10;
    }

    // Access and print values from the array
    for (int i = 0; i < arr.getSize(); ++i) {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }

    return 0;
}
