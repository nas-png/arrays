#include <iostream>
using namespace std;

int main() {
    // Step 1: Declare and initialize an array with football club names
    string clubs[5] = {"Barcelona", "Real Madrid", "Liverpool", "Manchester United", "Bayern Munich"};

    // Step 2: Insert (update) new football club names at specific positions in the array
    clubs[1] = "Chelsea";  // Changing the club at index 1 to Chelsea
    clubs[4] = "Paris Saint-Germain";  // Changing the club at index 4 to PSG

    // Step 3: Traverse the array and print the updated football club names
    for (int i = 0; i < 5; i++) {
        cout << "Club at index " << i << ": " << clubs[i] << endl;  // Print the club name at index i
    }

    return 0;
}
