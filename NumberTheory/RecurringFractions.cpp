#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

string solve(long long num, long long den) {

    if(num % den == 0) {
        return to_string(num / den);
    }

    string result = to_string(num / den) + ".";
    long long remainder = num % den;

    unordered_map<long long, int> pos;

    while(remainder != 0) {

        if(pos.count(remainder)) {
            int index = pos[remainder];
            result.insert(index, "(");
            result += ")";
            break;
        }

        pos[remainder] = result.size();

        remainder *= 10;
        result += to_string(remainder / den);
        remainder %= den;
    }

    return result;
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        long long a,b;
        cin >> a >> b;
        cout << solve(a,b) << endl;
    }
}