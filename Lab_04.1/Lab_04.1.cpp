// Lab_04.1.cpp
// < Кучер, Софія>
// Лабораторна робота № 4.1
// Лінійні програми.
// Варіант 8 
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int K, N;

    cout << "K = "; cin >> K;
    cout << "N = "; cin >> N;

    // 1-й спосіб: while(...) { ... }
    double P1 = 1;
    int i = K;
    while (i <= N)
    {
        P1 *= (double)K / i + (double)i / N;
        i++;
    }

    // 2-й спосіб: do { ... } while(...);
    double P2 = 1;
    i = K;
    do
    {
        P2 *= (double)K / i + (double)i / N;
        i++;
    } while (i <= N);

    // 3-й спосіб: for(...; ...; i++) { ... }
    double P3 = 1;
    for (i = K; i <= N; i++)
        P3 *= (double)K / i + (double)i / N;

    // 4-й спосіб: for(...; ...; i--) { ... }
    double P4 = 1;
    for (i = N; i >= K; i--)
        P4 *= (double)K / i + (double)i / N;

    cout << fixed << setprecision(6);
    cout << endl;
    cout << "P1 (while)    = " << P1 << endl;
    cout << "P2 (do-while) = " << P2 << endl;
    cout << "P3 (for i++)  = " << P3 << endl;
    cout << "P4 (for i--)  = " << P4 << endl;

    return 0;
}
