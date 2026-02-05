#include <iostream>
#include <fstream>
#include <vector>
#include <set>

using namespace std;

int main() {
    ifstream fin("cercetasi.in");
    ofstream fout("cercetasi.out");

    int N;
    if (!(fin >> N)) return 0;


    int M = 0;
    int k_final = 0;
    for (int p2 = 2; p2 * p2 <= N; p2 *= 2) {
        if ((N - p2 * p2) >= 0 && (N - p2 * p2) % (2 * p2) == 0) {
            M = p2;
            k_final = (N - p2 * p2) / (2 * p2);
        }
    }

    fout << M << "\n";


    set<int> tinte;
    for (int i = 0; i < M; ++i) {
        int cercetas = 2 * k_final + 2 * i + 1;
        tinte.insert(cercetas);
        fout << cercetas << (i == M - 1 ? "" : " ");
    }
    fout << "\n";

    vector<int> chair(N + 1);
    for (int i = 1; i <= N; ++i) {
        fin >> chair[i]; 
    }

    vector<bool> vizitat(N + 1, false);
    int total_parcurs = 0;

    for (int i = 1; i <= N; ++i) {
        if (!vizitat[i]) {
       
            vector<int> ciclul_curent;
            int curr = i;
            bool are_tinta = false;

            while (!vizitat[curr]) {
                vizitat[curr] = true;
                int cercetas = chair[curr];
                ciclul_curent.push_back(cercetas);
                
               
                if (tinte.count(cercetas)) {
                    are_tinta = true;
                }
                
   
                curr = cercetas;
            }

            if (are_tinta && ciclul_curent.size() > 1) {
                total_parcurs += ciclul_curent.size();
            }
        }
    }

    fout << total_parcurs << "\n";

    return 0;
}