#include<bits/stdc++.h>
using namespace std;

int main() {
    // Dynamically allocate a float
    float* pFloat = new float;
    *pFloat = 3.14f;
    cout << "Float value: " << *pFloat << endl;

    // Dynamically allocate a long
    long* pLong = new long;
    *pLong = 1234567890L;
    cout << "Long value: " << *pLong << endl;

    // Dynamically allocate a char
    char* pChar = new char;
    *pChar = 'A';
    cout << "Char value: " << *pChar << endl;

    // Delete the dynamically allocated memory
    delete pFloat;
    delete pLong;
    delete pChar;

    return 0;
}
