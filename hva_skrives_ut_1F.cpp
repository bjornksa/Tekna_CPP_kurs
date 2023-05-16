#include "std_lib_facilities.h"


int main() {
    vector<int> v;
    v.push_back(1);
    v.push_back(2);

    for (int i = 1; i < 4; i++) {
        v.push_back(v[i - 1] + v[i]);
    }

    for (auto n : v) {
        cout << n << " ";
    }

    cout << endl;
    return 0;
}
