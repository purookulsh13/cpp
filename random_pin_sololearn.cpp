#include <iostream>
#include <cstdlib>
using namespace std;


int main() {
    int range=18;
    // cin >> range;
    
    for (int x = 1; x <= 4 ; x++) 
    {
        cout << 1 + rand() % range;
    }
    
    
    return 0;
}
