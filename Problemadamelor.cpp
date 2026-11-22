#include <iostream>
using namespace std;
int st[20], n;
int valid(int k) {
    for (int i = 1; i <= k - 1; i++)
        if (st[i] == st[k] || abs(st[i] - st[k]) == abs(i - k))
            return 0;
    return 1;
}
int solutie(int k) {
    return k == n;
}
void tiparire() {
    cout << "Solutie: ";
    for (int i = 1; i <= n; i++)
        cout << st[i] << " ";
    cout << endl;
}
void bt(int k) {
    for (int i = 1; i <= n; i++) {
        st[k] = i;
        if (valid(k))
            if (solutie(k))
                tiparire();
            else
                bt(k + 1);
    }
}
int main() {
    cout << "n = "; cin >> n;
    bt(1);
    return 0;
}