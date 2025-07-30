#include <iostream>
using namespace std;

int reverse(int num) {
    int reversednum = 0;
    while (num > 0) {
        int digit = num % 10;
        reversednum = reversednum * 10 + digit;
        num = num / 10;
    }
    return reversednum;
}

int main() {
    int num = 123;
    int reversed = reverse(num);
    cout << reversed << endl;
    return 0;
}
