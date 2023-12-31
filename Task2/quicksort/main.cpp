#include <fstream>
#include <vector>
#include <ctime>

using namespace std;

int partition(vector<int> &arr, int low, int high, int pivot){
	int PIndex = low;

    for(int i=low;i<=high;i++) {

        if(arr[i]<=pivot) {
            swap(arr[PIndex],arr[i]);
            PIndex++;
        }
    }

    PIndex--;
    for (int i = low; i <= PIndex; i++) {
        if (arr[i] == pivot) {
            swap(arr[i], arr[PIndex]);
            break;
        }
    }

	return PIndex;
}

void quickSort(vector<int> &arr, int low, int high){
	if(low < high) {
	    int pivot = arr[(high + low) / 2];

	    int PIndex = partition(arr, low, high, pivot);
        quickSort(arr, low, PIndex-1);
        quickSort(arr, PIndex+1, high);
	}
}

int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");
	int n;
	fin >> n;
	vector<int> a(n);

	for (int &i : a) {
        fin >> i;
	}
	int t1 = clock();
	quickSort(a, 0 , n-1);
	int t2 = clock();
    for (int i =  0; i < n; i++)
        fout << a[i] << ' ';
    fout << endl;
    fout << t2 - t1;

    return 0;
}
