#include <iostream>
using namespace std;

int solution(int number) {
    if (number <= 0) return 0;

    int sum = 0;
    for (int i = 1; i < number; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int number;
    cin >> number;

    cout << solution(number);

    return 0;
}
