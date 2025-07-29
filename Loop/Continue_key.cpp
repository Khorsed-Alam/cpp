#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter an any integer number: ";
    cin>>n;
    for (int i = 1; i <= n; i++) {
        if (i == 5) {
            continue;  // Skip the rest of the loop when i is 5
        }
        cout << "Number: " << i << endl;
    }
    return 0;
}
