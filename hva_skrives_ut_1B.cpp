#include "std_lib_facilities.h"

int func(int a, int& b, long* c) {
    a = 300;
    b = - 2;
    *c = 1;
    return (a + b + *c);
}

int main(){

    int i = 0;
    long *k = new long(200000);
    cout << func(i, i, k) << " ";
    cout << i << " " << *k;

}
