#include <iostream>
using namespace std;

int main() {
    int A[10][15];
    int n, m;

    cin >> n >> m;

    
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> A[i][j];

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cout << A[i][j] << "\t";
        cout << endl;
    }

    int sum = 0;
    int max = A[0][0];
    int min = A[0][0];
    int primeCount = 0;

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int x = A[i][j];
            sum += x;

            if (x > max) max = x;
            if (x < min) min = x;

            if (abs(x) > 1) {
                int ok = 1;
                for (int d = 2; d * d <= x; d++)
                    if (abs(x) % d == 0)
                        ok = 0;
                if (ok) primeCount++;
            }
        }
    }

    cout << "Suma = " << sum << endl;
    cout << "Maxim = " << max << endl;
    cout << "Minim = " << min << endl;
    cout << "Prime = " << primeCount << endl;

    
    int v[150];
    int k = 0;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            v[k++] = A[i][j];

    for (int i = 0; i < k - 1; i++)
        for (int j = i + 1; j < k; j++)
            if (v[i] > v[j]) {
                int aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }

    cout << "Tablou linear sortat:" << endl;
    for (int i = 0; i < k; i++)
        cout << v[i] << " ";
    cout << endl;

    
    k = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            A[i][j] = v[k++];

    cout << "Matrice cu randuri sortate" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cout << A[i][j] << "\t";
        cout << endl;
    }

    
    int s = sum < 0 ? -sum : sum;
    int bin[32];
    int b = 0;

    if (s == 0)
        cout << "Suma in baza 2" << endl;
    else {
        while (s > 0) {
            bin[b++] = s % 2;
            s /= 2;
        }
        cout<<"Suma in baza 2 ";
        for (int i = b - 1; i >= 0; i--)
            cout << bin[i];
        cout << endl;
    }

    int h = max < 0 ? -max : max;
    int hex[32];
    int p = 0;

    if (h == 0)
        cout << "Max in baza 16: 0" << endl;
    else {
        while (h > 0) {
            hex[p++] = h % 16;
            h /= 16;
        }
        cout << "Max in baza 16: ";
        for (int i = p - 1; i >= 0; i--) {
            if (hex[i] < 10) cout << hex[i];
            else cout << char('A' + hex[i] - 10);
        }
        cout << endl;
    }

    
    int a = n, b2 = m;
    while (b2 != 0) {
        int r = a % b2;
        a = b2;
        b2 = r;
    }

    cout << "cmmdc(n, m) = " << a << endl;

    return 0;
}
