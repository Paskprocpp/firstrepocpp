#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); 
    int roll = rand() % 6 + 1; 
    cout << "You rolled a " << roll << endl;
    return 0;
}
