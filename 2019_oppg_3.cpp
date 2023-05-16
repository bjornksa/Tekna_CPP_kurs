#include "std_lib_facilities.h"

struct Food {
    string name;
    double price;
    string where;
};

bool operator<(const Food& lhs, const Food& rhs){
    return lhs.price < rhs.price;
}

void addPrice(map<string, set<Food>> &db, Food fp){
    db[fp.name].insert(fp);
}

void printAllPrices(const map<string, set<Food>> &db){
    for (auto it = db.begin(); it != db.end(); ++it){
        cout << it->first << ":" << endl;

        for (auto it2 = it->second.begin(); it2 != it->second.end(); ++it){
            cout << it2->price << " " << it2->where << endl;
        }
    }
}

void bestPrice(const map<string, set<Food>> & db, string name){
    auto it = db.find(name);
    if (it == db.end()){
        cout << " No price found for " << name << endl;
    }else {
        auto it2=it->second.begin();
        cout << "Best price for " << name << " is " << it2->price;
        cout << " at " << it2->where << endl;
    }
}

int main(){

    map<string, set<Food> > db;
    db["Bread"].insert(Food{"Bread", 25.45, "COOP-Lohove"});
    db["Milk"] = {Food{"Milk", 19.99, "COOP-Moholt"},
                    Food{"Milk", 20.5, "KIWI-Moholt"},
                    Food{"Milk", 21.5, "Rema-Eberg"}};

    return 0;
}
