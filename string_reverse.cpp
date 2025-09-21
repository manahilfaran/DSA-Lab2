#include <iostream>
using namespace std;

void string_reversal(char* m, int str_size) {
    for (int i = 0; i < str_size / 2; i++) {
        char temp = m[i];
        m[i] = m[str_size - i - 1];
        m[str_size - i - 1] = temp;
    }
}

int main() {
    int size;
    cout << "Enter size: ";
    cin >> size;
    cin.ignore();  

    char* str = new char[size + 1];  
    cout << "Enter string: ";
    cin.getline(str, size + 1);

    int actual_length = strlen(str);  
    string_reversal(str, actual_length);

    cout << "Reversed string: " << str << endl;

    delete[] str;
    return 0;
}