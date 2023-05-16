#include "fstream"
#include "string"
#include "iostream"
#include "vector"
#include "sstream"

using namespace std;


struct Obs{
    int x;
    int y;
};

vector<Obs> readFile(string filename){
    ifstream inFile{filename};
    if (!inFile){
        throw(runtime_error{"Can't open file: " + filename});
    }

    vector<Obs> observations;
    int x;
    int y;
    string line;

    while(getline(inFile, line)){
        stringstream ss{line};
        ss >> x >> y;
    }

    // while (inFile >> x >> y){
    //     if (x == -1){
    //         break;
    //     }
    //     observations.push_back(Obs{x, y});
    // }
    return observations;
}

int main() {

    try{
        vector<Obs> observations = readFile("input.txt");
    }
    catch(runtime_error e){
        cout << e.what() << endl;
        return 1;
    }

    return 0;
}
