#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int cnt = 0;
    int o = 0;
    for (int i = 0; i < (int)s.length(); i++) {
        cnt += s[i] == '-';
        o += s[i] == 'o';
    }
    if (o == 0 || cnt % o == 0) {
        puts("YES");
    } else {
        puts("NO");
    }
    return 0;
}
