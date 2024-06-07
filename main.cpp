#include <iostream>

using namespace std;

void heapBottomUp(int h[], int length){
    for (int i = length/2; i > 0; i--) {
        int k = i;
        int v = h[k];
        bool heap = false;
        while (!heap && 2 * k <= length) {
            int j = 2 * k;
            if (j < length) {
                if (h[j] < h[j + 1]) {
                    j = j + 1;
                }
            }
            if (v >= h[j]) {
                heap = true;
            } else{
                h[k] = h[j];
                k = j;
            }
        }
        h[k] = v;
    }
}


int main() {
    int n = 7;
    int h[8] = {-1 ,2, 9, 7, 6, 5, 8, 10};


    heapBottomUp(h, n);

    for (int i = 1; i < n + 1; ++i) {
        cout << h[i] << endl;
    }

    return 0;
}
