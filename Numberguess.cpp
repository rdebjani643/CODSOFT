#include <iostream>
#include <cstdlib>   // for rand() and srand()
#include <ctime>     
  
using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0))); //  random number generation
    int secretNumber = rand() % 50 + 1;       // random number between 1 and 50
    int guess;
    

    cout << "      Welcome to the Number Guessing Game!\n";
    cout<<"_________________________________________________"<<endl;
    cout<<endl;
    

    do {
        cout << " Guess a number between 1 and 50 and enter your guess : ";
        cin >> guess;
        

        if (guess < secretNumber) 
        {
            cout << "Oops! Too low! Try again.\n";
        }
         else if (guess > secretNumber) 
        {
            cout << "Oops! Too high! Try again.\n";
        }
         else
        {
            cout << "\nCongratulations! You guessed the number " << secretNumber << " correctly!\n";
        }

    } 
    while (guess != secretNumber);

    return 0;
}
