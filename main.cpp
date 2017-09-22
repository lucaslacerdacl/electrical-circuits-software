#include <iostream>
#include <string>

using namespace std;

const string helloWorld("Hello World!");
const char breakLine = '\n';

int main() {

    string title("Please type some string and press enter: ");
    string i;
    
    cout << helloWorld << breakLine << title << endl;

    cin >> i;

    return 0;
}