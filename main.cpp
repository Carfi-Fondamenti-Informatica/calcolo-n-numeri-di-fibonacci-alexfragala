#include <iostream>
using namespace std;

int main() {
    int a = 1, b = 0, i = 0, n = 0, c = 0;
    cin >> n;

    if (n < 2) {
        cout << "errore" << endl;
    } else {
        
        for (i = 0; i <=(n-1); i++)
            {
            c = a + b;
            cout << c << endl;
            a = b;
            b = c;

        }
        return 0;
    }
}
