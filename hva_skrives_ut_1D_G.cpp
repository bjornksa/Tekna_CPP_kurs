#include "std_lib_facilities.h"

struct dlNode {
    double data = 0;
    dlNode* next = nullptr;
    dlNode* prev = nullptr;

    dlNode(double num) :
        data{ num } {}
};

// 1G)
void node_test(){
    dlNode* n1 = new dlNode(1.1);
    dlNode* n2 = new dlNode(2.2);
    dlNode* n3 = new dlNode(3.3);

    n1->next = n2; n2->prev = n1;
    n2->next = n3; n3->prev = n2;

    while (n3->prev != nullptr) {
        n3 = n3->prev;
    }
    cout << n1->next->data << " ";
    cout << n3->data;
}

// 1D)
void pointer_test(){
    int a = 1;
    {
        int a = 5;
        int* p1 = new int(6);
        int* p2 = p1;
        p1 = &a;
        *p2 = 3;
        cout << a << " " << *p1 << " " << *p2;
    }
}

int main(){

    pointer_test();

    cout << endl << endl;

    node_test();

    cout << endl;

    return 0;
}
