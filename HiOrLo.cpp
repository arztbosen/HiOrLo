#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;


int main(){

    srand(time(0));
    bool simulationIsRunning = true;
    string guess;

    cout << "   _____                  __ ___.                               " << endl;
    cout << "  /  _  \\________________/  |\\_ |__   ____  ______ ____   ____  "<< endl;
    cout << " /  /_\\  \\_  __ \\___   /\\   __\\ __ \\ /  _ \\/  ___// __ \\ /    \\ "<< endl;
    cout << "/    |    \\  | \\//    /  |  | | \\_\\ (  <_> )___ \\  ___/|   |  \\ "<< endl;
    cout << "\\____|__  /__|  /_____ \\ |__| |___  /\\____/____  >\\___  >___|  /"<< endl;
    cout << "        \\/            \\/          \\/           \\/     \\/     \\/ "<< endl;

    cout << "Respond with: \"Higher\" or \"Lower\" to give your answer." << endl << endl;

    while(simulationIsRunning == true)
    {
        int number = rand() % 101;
        int higherOrLower = rand() % 101;

        cout << "Higher or Lower than " << higherOrLower << '?' << endl << endl;
        cout << "Your answer: "; cin >> guess;

        if ((guess == "Higher" || guess == "higher") && number > higherOrLower){
            cout << "\nCorrect! ";
            cout << "The number in my head was: " << number << '!' << endl;
        }
            else if(number <= higherOrLower && (guess == "Higher" || guess == "higher")){
            cout << "\nWrong!" << endl;
            }

        if ((guess == "Lower" || guess == "lower") && number < higherOrLower){
            cout << "\nCorrect! ";
            cout << "The number in my head was: " << number << '!' << endl;
        }
            else if(number >= higherOrLower && (guess == "Lower" || guess == "lower")){
            cout << "\nWrong!" << endl;
            }
        if (guess == "Secret"){
            cout << "the secret of the store" << endl;
        }

        cout << "\nDo you want to try again? (y/n)" << endl;
            char y = 'y';
            char n = 'n';
            char capY = 'Y';
            char capN = 'N';
            char x;
            cin >> x;
            
        if ((x == y || x == capY)){
            simulationIsRunning = true;
        }
            else if((x == n || x == capN)){
                simulationIsRunning = false;
            }
    }
    return 0;
}