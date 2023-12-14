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
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++)
            if(a[j] > a[j+1])
                swap(a[j], a[j+1]);
    }
    int t2 = clock();
    fout << t2 - t1 << endl;
    return 0;
}
