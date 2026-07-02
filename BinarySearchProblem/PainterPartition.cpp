#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

bool isPossible(vector<int>& arr, int n, int m, int maxAllowedPages) {
    int painters = 1, time = 0;
    
    for (int i = 0; i < n; i++) {
        // If a single element is larger than the cap, it's impossible
        if (arr[i] > maxAllowedPages) return false; 
        
        if (time + arr[i] <= maxAllowedPages) {
            time += arr[i];
        } else {
            painters++;
            time = arr[i];
        }
    }
    
    return painters <= m;
}

int allocateBooks(vector<int>& arr, int n, int m) {
    if (m > n) return -1;

    int sum = 0;
    int maxVal = 0;
    
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        maxVal = max(maxVal, arr[i]);
    }

    // Start search from maxVal to prevent individual overflow
    int st = maxVal, end = sum;
    int ans = -1;

    while (st <= end) {
        int mid = st + (end - st) / 2;
        
        if (isPossible(arr, n, m, mid)) {
            ans = mid;
            end = mid - 1; 
        } else {
            st = mid + 1;  
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {2, 1, 3, 4};
    int n = 4, m = 2;
    cout << allocateBooks(arr, n, m) << endl; 
    return 0;
}
