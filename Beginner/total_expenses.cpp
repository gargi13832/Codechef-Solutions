#include<bits/stdc++.h>
#include<string>
using namespace std;

int main() {

    int t;
    cin >> t;
    for (int l = 0; l < t; l++) {
        double a, b;
        cin >> a >> b;
        double m = a * b;
        if (a > 1000) {
            m = m * 0.9;
        }
        cout << fixed << setprecision(6) << m << endl;
    }

    return 0;
}
