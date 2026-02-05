#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

int celule[1001][1001];
long long S[1001][1001];
bool rand_util[1001], col_util[1001];

struct Cell {
    int val, r, c;
};


bool compare(Cell a, Cell b) {
    return a.val > b.val;
}

Cell toate_cel[1000001]; 

int main() {
    ifstream fin("iluminat.in");
    ofstream fout("iluminat.out");

    int C, n, k;
    fin >> C >> n >> k;

    int nr_cel = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            fin >> celule[i][j];

            if (C != 3) {
                toate_cel[nr_cel++] = {celule[i][j], i, j};
            }
        }
    }

    if (C == 1 || C == 2) {

        sort(toate_cel, toate_cel + nr_cel, compare);

        int stage = 0;
        for (int i = 0; i < nr_cel; i++) {
            int r = toate_cel[i].r;
            int c = toate_cel[i].c;


            if (!rand_util[r] && !col_util[c]) {
                stage++;

                if (stage == k) {
                    if (C == 1) {
                        fout << toate_cel[i].val << endl;
                    } else {

                        long long sum = 0;
                        for (int j = 1; j <= n; j++) 
                            if (!col_util[j]) sum += celule[r][j];
                        for (int i_idx = 1; i_idx <= n; i_idx++) 
                            if (!rand_util[i_idx] && i_idx != r) sum += celule[i_idx][c];
                        
                        fout << sum << endl;
                    }
                    return 0; 
                }
                rand_util[r] = true;
                col_util[c] = true;
            }
        }
    } 
    else if (C == 3) {
  
        long long max_arie = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                
                S[i][j] = celule[i][j] + S[i-1][j] + S[i][j-1] - S[i-1][j-1];
            }
        }


        for (int i = k; i <= n; i++) {
            for (int j = k; j <= n; j++) {
                long long curent = S[i][j] - S[i-k][j] - S[i][j-k] + S[i-k][j-k];
                if (curent > max_arie) max_arie = curent;
            }
        }
        fout << max_arie << endl;
    }

    return 0;
}