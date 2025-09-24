#include <bits/stdc++.h>
using namespace std;

vector<int> perm;       // current permutation being built
vector<bool> used;      // to track used elements

void permute(const vector<int>& nums, int n) {
    if (perm.size() == n) {
        cout << "{ ";
        for (int x : perm) cout << x << " ";
        cout << "}\n";
    } else {
        for (int i = 0; i < n; i++) {
            if (!used[i]) {
                perm.push_back(nums[i]);
                used[i] = true;

                permute(nums, n);

                perm.pop_back();
                used[i] = false;
            }
        }
    }
}

int main() {
    cout << "\n \t{ WE THE PEOPLE OF EARTH ENTRUST THIS TO YOU BRAVE WARRIORS FROM ANOTHER WORLD }\n";
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cout << "Element- ";
        cin >> nums[i];
    }

    used.assign(n, false);
    permute(nums, n);

    return 0;
}
