/*#include <iostream>
using namespace std;
int min(int a[] ,int n){

    int mini = a[0],mint;

    for (int i = 1; i < n; i++) {
        mint= min(a[i],mini);
    }

    cout << "min="<<mint<<endl;

}
int max(int a[],int n){
    

    int max1 = a[0],maxi;

    for (int i = 1; i < n; i++) {
        maxi=max(a[i],max1);
    }

    cout << "max="<<maxi;
}
void swap (int max,int min){
    swap(max,min);
    cout<<"Swap Of Min: "<<min;
    cout<<"Swap Of Max: "<<max;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout<<"Array : "
    for (int i = 0; i < n; i++) {
        cout << a[i]<<" ";
    }
    cout << endl;

}*/
#include <iostream>
using namespace std;

int findMin(int a[], int n) {
    int mini = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] < mini) {
            mini = a[i];
        }
    }

    return mini;
}

int findMax(int a[], int n) {
    int maxi = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] > maxi) {
            maxi = a[i];
        }
    }

    return maxi;
}

void swapValues(int &maxi, int &mini) {
    int temp = maxi;
    maxi = mini;
    mini = temp;
}

int main() {
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Array : ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    int mini = findMin(a, n);
    int maxi = findMax(a, n);

    cout << "Min = " << mini << endl;
    cout << "Max = " << maxi << endl;

    swapValues(maxi, mini);

    cout << "After Swap:" << endl;
    cout << "Min = " << mini << endl;
    cout << "Max = " << maxi << endl;

    return 0;
}