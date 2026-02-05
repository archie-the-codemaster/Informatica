#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {

    ifstream fin("avioane.in");
    ofstream fout("avioane.out");

    int N, Q;
    if (!(fin >> N >> Q)) return 0;

    vector<int> Y(N + 1);
    for (int i = 1; i <= N; ++i) {
        fin >> Y[i];
    }

    for (int i = 0; i < Q; ++i) {
        int P;
        long long H;
        fin >> P >> H;

        long long altitudine = Y[P] + H;

        int lim_st = 0; 
        for (int j = P - 1; j >= 1; --j) {
            if (Y[j] >= altitudine) {
                lim_st = j;
                break; 
            }
        }

    
        int lim_dr = N + 1; 
        for (int j = P + 1; j <= N; ++j) {
            if (Y[j] >= altitudine) {
                lim_dr = j;
                break; 
            }
        }


        int visible_count = (lim_dr - 1) - (lim_st + 1) + 1;
        

        fout << lim_dr - lim_st - 1 << "\n";
    }

    fin.close();
    fout.close();
    return 0;
}