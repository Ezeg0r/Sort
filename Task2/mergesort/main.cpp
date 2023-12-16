#include <fstream>
#include <vector>
#include <ctime>

using namespace std;

void mergeSort(vector <int> &a, int l, int r) {
	if (l >= r) {
		return;
	}
	
	int m = (l + r) / 2;
	mergeSort(a, l, m);
	mergeSort(a, m + 1, r);
	
	vector <int> med;
	int i = l, j = m + 1;
	while (i <= m && j <= r) {
		if (a[i] < a[j]) {
			med.push_back(a[i++]);
		}
		else {
			med.push_back(a[j++]);
		}
	}
	for (int k = i; k <= m; k++) {
		med.push_back(a[k]);
	}
	for (int k = j; k <= r; k++) {
		med.push_back(a[k]);
	}
	
	for (int k = l; k <= r; k++) {
		a[k] = med[k - l];
	}
}

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
	mergeSort(a, 0, n - 1);
	int t = clock();
	
	fout << t - t0 << endl;
	return 0;
}
