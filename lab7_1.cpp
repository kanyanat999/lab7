#include <iostream>
using namespace std;

int main() {
    int a = 20, b = 30;  
    int c = 4;          
    double output;
    output = static_cast<double>(a + b) / c;

   
    cout << "output: "<< output << endl;

    return 0;
}