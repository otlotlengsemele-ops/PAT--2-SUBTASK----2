//112501995
// PAT 2 Sub-task 2 - Morse Code Translator

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string inputMessage;
    string morseMessage = "";
    char letter;

    cout << "Enter a short message in English: ";
    getline(cin, inputMessage); // get the whole line with spaces

    cout << "Morse Code Translation:" << endl;
    cout << "------------------------" << endl;

    // Loop through each character in the message
    for (int i = 0; i < inputMessage.length(); i++)
    {
        letter = inputMessage[i];

        // Convert small letter to capital letter
        if (letter >= 'a' && letter <= 'z')
        {
            letter = letter - 32; // ASCII difference between a and A
        }

        // Check if it is a letter A-Z only
        if (letter >= 'A' && letter <= 'Z')
        {
            cout << letter << " : ";

            // Use if statements to match letter to morse code
            if (letter == 'A') { cout << ".-"; morseMessage = morseMessage + ".- "; }
            else if (letter == 'B') { cout << "-..."; morseMessage = morseMessage + "-... "; }
            else if (letter == 'C') { cout << "-.-."; morseMessage = morseMessage + "-.-. "; }
            else if (letter == 'D') { cout << "-.."; morseMessage = morseMessage + "-.. "; }
            else if (letter == 'E') { cout << "."; morseMessage = morseMessage + ". "; }
            else if (letter == 'F') { cout << "..-."; morseMessage = morseMessage + "..-. "; }
            else if (letter == 'G') { cout << "--."; morseMessage = morseMessage + "--. "; }
            else if (letter == 'H') { cout << "...."; morseMessage = morseMessage + ".... "; }
            else if (letter == 'I') { cout << ".."; morseMessage = morseMessage + ".. "; }
            else if (letter == 'J') { cout << ".---"; morseMessage = morseMessage + ".--- "; }
            else if (letter == 'K') { cout << "-.-"; morseMessage = morseMessage + "-.- "; }
            else if (letter == 'L') { cout << ".-.."; morseMessage = morseMessage + ".-.. "; }
            else if (letter == 'M') { cout << "--"; morseMessage = morseMessage + "-- "; }
            else if (letter == 'N') { cout << "-."; morseMessage = morseMessage + "-. "; }
            else if (letter == 'O') { cout << "---"; morseMessage = morseMessage + "--- "; }
            else if (letter == 'P') { cout << ".--."; morseMessage = morseMessage + ".--. "; }
            else if (letter == 'Q') { cout << "--.-"; morseMessage = morseMessage + "--.- "; }
            else if (letter == 'R') { cout << ".-."; morseMessage = morseMessage + ".-. "; }
            else if (letter == 'S') { cout << "..."; morseMessage = morseMessage + "... "; }
            else if (letter == 'T') { cout << "-"; morseMessage = morseMessage + "- "; }
            else if (letter == 'U') { cout << "..-"; morseMessage = morseMessage + "..- "; }
            else if (letter == 'V') { cout << "...-"; morseMessage = morseMessage + "...- "; }
            else if (letter == 'W') { cout << ".--"; morseMessage = morseMessage + ".-- "; }
            else if (letter == 'X') { cout << "-..-"; morseMessage = morseMessage + "-..- "; }
            else if (letter == 'Y') { cout << "-.--"; morseMessage = morseMessage + "-.-- "; }
            else if (letter == 'Z') { cout << "--.."; morseMessage = morseMessage + "--.. "; }

            cout << endl; // new line for next letter
        }
        // If it is a space, add 3 spaces in the full morse output
        else if (letter == ' ')
        {
            morseMessage = morseMessage + " ";
        }
        // Ignore other characters like numbers and symbols
    }

    cout << "Full Morse code with spaces:" << endl;
    cout << morseMessage << endl;

    return 0;
}





