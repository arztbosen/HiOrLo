#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;


int main(){

    srand(time(0));
    bool simulationIsRunning = true;
    string guess;

    cout << "Respond with: \"Higher\" or \"Lower\" to give your answer." << endl;

    while(simulationIsRunning == true)
    {
        int number = rand() % 101;
        int higherOrLower = rand() % 101;

        cout << "Higher or Lower than " << higherOrLower << '?' << endl;
        cin >> guess;
        if (guess == "Higher" || guess == "higher" && number > higherOrLower){
            cout << "Correct! ";
            cout << "The number in my head was: " << number << '!' << endl;
        }
            else if(number < higherOrLower && guess == "Higher"){
            cout << "Wrong!" << endl;
            }

        if (guess == "Lower" || guess == "lower" && number < higherOrLower){
            cout << "Correct! ";
            cout << "The number in my head was: " << number << '!' << endl;
        }
            else if(number > higherOrLower && guess == "Lower"){
            cout << "Wrong!" << endl;
            }
        if (guess == "Secret"){
            cout << "the secret of the store" << endl;
        }

        cout << "Do you want to try again? (y/n)";
            char y = 'y';
            char n = 'n';
            char capY = 'Y';
            char capN = 'N';
            char x;
            cin >> x;
            
        if (x == y || x == capY){
            simulationIsRunning = true;
        }
            else if(x == n || x == capN){
                simulationIsRunning = false;
            }
    }
    return 0;
}