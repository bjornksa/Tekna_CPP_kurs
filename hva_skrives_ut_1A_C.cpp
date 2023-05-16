#include "std_lib_facilities.h"

int main(){

    cout << "1A) "  << endl;
    // 1a)
    int a = 5;
    int b = 10 / a --;
    int c = 10 % (++b);

    cout << a << " " << b << " " << (c += 3);

    cout << endl << "1C): " << endl;
    // 1c)
    string s1 = "aaa";
    string s2{ "bbb" };
    string s3 = s1 + s2;

    cout << s3 << " " << s3.size() << " ";
    cout << s3[2] << s3[3] << " ";
    s1[1] = 'A' + 2;

    cout << s1 << " " << 'c' - 'a' << endl;
}
