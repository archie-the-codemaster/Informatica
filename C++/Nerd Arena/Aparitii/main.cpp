#include <fstream>
using namespace std;

int main() {
    ifstream fin("aparitii.in");
    ofstream fout("aparitii.out");

    int N;
    fin >> N;

    int x;
    int ras = 0;

    for (int i = 0; i < 2 * N - 1; i++) {
        fin >> x;
        ras = ras ^ x;
    }

    fout << ras;

    return 0;
}
