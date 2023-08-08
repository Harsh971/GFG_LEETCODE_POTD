class Solution {
public:
    int countFractions(int n, int num[], int den[]) {
        map<pair<int, int>, int> mp;

        for (int i = 0; i < n; ++i) {
            int gcd = __gcd(num[i], den[i]);
            ++mp[{num[i] / gcd, den[i] / gcd}];
        }

        int out = 0;

        for (auto i : mp) {
            int nume = i.first.first;
            int deno = i.first.second;
            int cnt = i.second;

            if (cnt) {
                int newNume = deno - nume;
                if (nume == newNume) {
                    out += (cnt * (cnt - 1)) / 2;
                } else if (mp.find({newNume, deno}) != mp.end()) {
                    out += cnt * mp[{newNume, deno}];
                    mp[{newNume, deno}] = 0;
                }
            }
        }
        return out;
    }
};
