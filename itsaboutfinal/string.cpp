#include <iostream>

using namespace std;

int main()
{
    char ch, peekCh;
    cout << "Enter a string: ";

    cin.get(ch);
    cout << "After first cin.get(ch): ";
    cout << "ch = " << ch << endl;
    cin.putback(ch);
    cin.get(ch);
    cout << "After second cin.get(ch): ";
    cout << "ch = " << ch << endl;

    //put the character back in the stream

    cin.get(ch);
    cout << "After putback, the third cin.get(ch): ";
    cout << "ch = " << ch << endl;

    //get next character in stream
    //without removing it
    peekCh = cin.peek();
    cin.get(ch);

    cout << "After peek, the fourth cin.get(ch): ";
    cout << "ch = " << ch << endl;
    cout << "And peekCh = " << peekCh << endl;

    return 0;
}
