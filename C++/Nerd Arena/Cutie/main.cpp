#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int main() {
    ifstream fin("cutie.in");
    ofstream fout("cutie.out");

    int N, K;
    fin >> N >> K;

    vector<string> retea(N);
    int br, bc; 

    for (int i = 0; i < N; ++i) {
        fin >> retea[i];
        for (int j = 0; j < N; ++j) {
            if (retea[i][j] == 'B') {
                br = i; 
                bc = j;
                retea[i][j] = '.'; 
            }
        }
    }

  
    int dir = 0; 

    string rot;
    for (int i = 0; i < K; ++i) {
        char tip;
        fin >> tip;
        if (tip == 'S') dir = (dir + 1) % 4;      
        else if (tip == 'D') dir = (dir + 3) % 4; 

        if (dir == 0) {
            while (br + 1 < N && retea[br + 1][bc] == '.') br++;
        } else if (dir == 1) { 
            while (bc - 1 >= 0 && retea[br][bc - 1] == '.') bc--;
        } else if (dir == 2) { 
            while (br - 1 >= 0 && retea[br - 1][bc] == '.') br--;
        } else if (dir == 3) { 
            while (bc + 1 < N && retea[br][bc + 1] == '.') bc++;
        }
    }
    retea[br][bc] = 'B';

    for (int i = 0; i < N; ++i) {
        fout << retea[i] << "\n";
    }

    return 0;
}