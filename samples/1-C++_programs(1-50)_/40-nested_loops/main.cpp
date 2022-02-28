#include <iostream>
#include <vector>

using namespace std;

template <typename intT> 
vector<intT> fact(intT num) {

    intT j = 2;
    vector<intT> res;
    while (num / intT(2) >= j) {
        if (num % j == 0) {
            res.push_back(j);
            num /= j;
            j = intT(2);
        }
        else {
            ++j;
        }
    }
    res.push_back(num);
    return res;
}


//typedef unsigned long integralT;
typedef __int64 integralT;

int main() {

    vector<integralT> v;
    integralT n;

    while (true) {
        cout << "Enter positive number: ";
        cin >> n;
        v.clear();
        v = fact(n);

        for (int i = v.begin(); i != v.end(); i++) {
            if (i != v.begin())
                cout << ", ";
            cout << *i;
        }
        cout << endl << endl;
    }

    return 0;
}
