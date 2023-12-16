#include <fstream>
#include <vector>
#include <ctime>
#include <algorithm>

using namespace std;

int main() {
	ifstream fin("input.txt");
	ofstream fout("output.txt");
	
	int n;
	fin >> n;
	
	vector <int> a(n);
	for (int i = 0; i < n; i++) {
		fin >> a[i];
	}
	
	int t0 = clock();
	sort(a.begin(), a.end());
	int t = clock();
	
	fout << t - t0 << endl;
	return 0;
}
