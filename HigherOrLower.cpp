#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


int main(){

    srand(time(0));
    int number = rand() % 101;
    int higherOrLower = rand() % 101;
    string guess;

    cout << "WARNING! This program is CASE SENSITIVE." << endl << "Respond with: \"Higher\" or \"Lower\"" << endl;

    cout << "Higher or Lower than " << higherOrLower << '?' << endl;
    cin >> guess;
    if (guess == "Higher" && number > higherOrLower){
        cout << "Correct! ";
        cout << "The number in my head was: " << number << '!' << endl;
    }
        else if(number < higherOrLower && guess == "Higher"){
            cout << "Wrong!";
        }

    if (guess == "Lower" && number < higherOrLower){
        cout << "Correct! ";
        cout << "The number in my head was: " << number << '!' << endl;
    }
        else if(number > higherOrLower && guess == "Lower"){
            cout << "Wrong!";
        }
    if (guess == "Secret"){
        cout << "the secret of the store" << endl;
    }
    cout << "Restart the program to try again!";
    string x;
    cin >> x;

    return 0;
}