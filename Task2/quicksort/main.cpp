#include <iostream>
#include <ctime>
#include <vector>
#include <fstream>

using namespace std;

int partition(vector<int> &arr, int start, int end) {

   int pivot = arr[start];

   int count = 0;
   for (int i = start + 1; i <= end; i++) {
     if (arr[i] <= pivot)
         count++;
   }
   int pivotIndex = start + count;
   swap(arr[pivotIndex], arr[start]);
   int i = start, j = end;

   while (i < pivotIndex && j > pivotIndex) {

     while (arr[i] <= pivot) {
         i++;
     }

     while (arr[j] > pivot) {
         j--;
     }

     if (i < pivotIndex && j > pivotIndex) {
         swap(arr[i++], arr[j--]);
     }
   }

   return pivotIndex;
}

void quickSort(vector<int> &arr, int start, int end) {

   if (start >= end)
     return;
   int p = partition(arr, start, end);
   quickSort(arr, start, p - 1);
   quickSort(arr, p + 1, end);
}

int main() {
   fstream cin("input.txt");
   ofstream cout("output.txt");
   int n;
   cin >> n;
   vector<int> a(n);
   for (int &i : a) {
      cin >> i;
   }

   int t1 = clock();
   quickSort(a, 0, n - 1);
   int t2 = clock();
   cout << t2 - t1;

   return 0;
}
