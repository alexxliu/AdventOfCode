#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> l1, l2;

    int n1, n2;

    while (cin >> n1 >> n2) {
        l1.push_back(n1);
        l2.push_back(n2);
    }

    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());

    int res = 0;
    for (int i = 0; i < l1.size(); i++) {
        res += abs(l1[i] - l2[i]);
    }

    cout << res << "\n";

    return 0;
}