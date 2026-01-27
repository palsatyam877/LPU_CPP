#include<bits/stdc++.h>
using namespace std;

int f(int x) {
    if(x == 0) return 0;

    return f(x - 1);
}

int main() {
    int ans = f(4);
    cout << ans << "\n";
}