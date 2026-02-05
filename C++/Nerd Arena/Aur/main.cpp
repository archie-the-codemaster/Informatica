#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream fin("aur.in");
    ofstream fout("aur.out");

    int C;
    fin >> C;

    int N, K, P;
    if (C == 1) {
        fin >> N;
    } else if (C == 2) {
        fin >> N >> K;
    } else {
        fin >> N >> P;
    }

    string s = "", x;
    for (int i = 0; i < N; i++) {
        fin >> x;
        s += x;   
    }

    if (C == 1) {
        fout << s.size();
    }

    else if (C == 2) {
        fout << s[K - 1];
    }

    else {
        string maxx = s.substr(0, P);
        for (int i = 1; i + P <= (int)s.size(); i++) {
            string cur = s.substr(i, P);
            if (cur > maxx)
                maxx = cur;
        }
        fout << maxx;
    }

    return 0;
}
