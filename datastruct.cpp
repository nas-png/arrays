#include <iostream>
using namespace std;

int main() {
    
    string clubs[6] = {"AC Milan", "Real Madrid", "Liverpool", "Manchester United", "Bayern Munich","Arsenal};

    clubs[1] = "Newcastle";  
    clubs[4] = "Paris Saint-Germain";  

    
    for (int i = 0; i < 5; i++) {
        cout << "Club at index " << i << ": " << clubs[i] << endl; 
    }

    return 0;
}
