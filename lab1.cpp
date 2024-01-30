#include <iostream>
#include <string> 

using namespace std;

int main ()
{
string message; 
int key;
char shift;
char action;
int i;

cout << "Message to be Encrypted/Decrypted: ";
getline (cin, message);

cout << "\nNumber of positions to be shifted: ";
cin >> key;

cout << "\nShift (A.) Left or (B.) Right: ";
cin >> shift;

cout << "\n(A.) Encryption or (B.) Decryption: ";
cin >> action;

    if ((shift != 'A' && shift != 'a' && shift != 'B' && shift != 'b') || (action != 'a' && action != 'A' && action != 'B' && action != 'b'))
    {
        cout << "\nError! Please type the corresponding letter of your choice/s" << endl;
    }

    if (key < 0)
    {
        cout << "Please input a positive key!" << endl;

    }


    else 
    {
        for (int j = 0; j < message.length(); ++j)
        {
            message[j] = tolower(message[j]);
        }

        for (int i = 0; i < message.length(); ++i) 
        {
        int x = (int)message[i];
            if (((shift == 'A' || shift ==  'a') && (action == 'A' || action == 'a')) || ((shift == 'B' || shift == 'b') && (action == 'B'|| action == 'b'))) // Encrypt Left or Decrypt Right 
            { 
                if ((x > 96) && (x < 123))
                { 
                x = x - key;  
                    if (x < 97)
                        {
                            message[i] = x;
                            message[i] = message[i] + 26;
                        }
                    else 
                        {
                            message[i] = x; 
                        }
                }

                else 
                {
                    message[i] = x; 
                }
            }

            else if (((shift == 'B' || shift ==  'b') && (action == 'A' || action == 'a')) || ((shift == 'A' || shift == 'a') && (action == 'B'|| action == 'b'))) // Encrypt Right or Decrypt Left
        { 
                if ((x > 96) && (x < 123))
                { 
                x = x + key;  
                    if (x > 122)
                        {
                            message[i] = x;
                            message[i] = message[i] - 26;
                        }
                    else 
                    {
                        message[i] = x; 
                    }
                }

                else 
                {
                    message[i] = x; 
                }
            }
        cout << message[i];
        }
    }
return 0;
}