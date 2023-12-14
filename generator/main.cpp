#include <bits/stdc++.h>

using namespace std;

mt19937 gen(chrono::steady_clock::now().time_since_epoch().count());

int main(int argc, char *argv[])
{
    ofstream fout("input.txt");
    int n = atoi(argv[1]);
    int p = atoi(argv[2]);
    fout << n << endl;
    for (int i = 0; i < n; i++){
        fout << (int)(gen() % (2 * p + 1)) - p << ' ';
    }
    return 0;
}
