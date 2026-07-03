// 158A. Next round

#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    int cutoff = a[k - 1]; // Because CPP follows zero based indexing
    int ans = 0;

    for (int i = 0; i < n; i++){
        if (a[i] >= cutoff && a[i] > 0){
            ans++;
        }
    }
    cout << ans;
}