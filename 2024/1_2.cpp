#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <unordered_map>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> l1;

    unordered_map<int, int> l2;

    int n1, n2;

    while (cin >> n1 >> n2) {
        l1.push_back(n1);
        l2[n2]++;
    }

    int res = 0;
    for (int i = 0; i < l1.size(); i++) {
        res += l1[i] * l2[l1[i]];
    }

    cout << res << "\n";

    return 0;
}