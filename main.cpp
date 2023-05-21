#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    char a;
    cin>>a;
    if (maiusc(a)!=false) {
        cout << maiusc(a) << endl;
    } else {
        cout<<"errore"<<endl;
    }
    return 0;
}
