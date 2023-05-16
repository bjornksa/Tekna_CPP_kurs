#include "std_lib_facilities.h"

int main(){
    constexpr int size1{ 5 };
    char charTab[size1] = {'a', 'f', 'o', 'r', 't'};
    char* ptr = &charTab[2];

    ptr += 2;
    cout << *ptr;       // t
    cout << *(ptr-1);   // r
    ptr -= 4;
    cout << ptr[0];     // a
    ptr++;
    cout << *ptr;       // f
    cout << *(ptr+1);   // o
}
