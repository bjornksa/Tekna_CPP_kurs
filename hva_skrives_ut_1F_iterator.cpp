#include "std_lib_facilities.h"

int main(){

    vector<char> charVec {'d', 'c', 'b', 'a'};
    set<char> charSet {'d', 'c', 'b', 'a'};

    auto it = charVec.begin();
    while (it != charVec.end()){
        cout << *it++;
    }
    cout << " ";

    auto it2 = charSet.begin();
    while (++it2 != charSet.end()){
        cout << *it2;
    }

    cout << endl;
    return 0;
}
