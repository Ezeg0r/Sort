#include <fstream>
#include <vector>
#include <ctime>
using namespace std;

int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    int n;
    fin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++)
        fin >> a[i];
    int t1 = clock();
    int j, key;
    for (int i = 1; i < n; i++) {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
    int t2 = clock();
    fout << t2 - t1 << endl;
    return 0;
}
