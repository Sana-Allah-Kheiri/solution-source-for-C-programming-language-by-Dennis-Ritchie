/*  exercise1 - 2.cpp : Escape Sequence Cheat Sheet program
* helping you find out the syntax or symbol which should be inserted after 
* backslash, by providing the name of your desied escape character.
*/ 


#include <iostream>
using namespace std;
#define LOG cout << " " << "\n" <<
#define GET cin>> 
#define LOOP(n) for (int i = 0 ; i < n ; i++)

int main ( ) {
    // changing background to white and text color to blue
    // 1st no 4 bkgrnd and 2nd no is 4 text color
    /*
0 = Black
8 = Gray
1 = Blue
9 = Light Blue
2 = Green
A = Light Green
3 = Aqua
B = Light Aqua
4 = Red
C = Light Red
5 = Purple
D = Light Purple
6 = Yellow
E = Light Yellow
7 = White
F = BringWhite
*/
    system("COLOR F1");

    //variables
    short answer{ };
    bool cheat{ true };

    //loop for repeating program without need to open and close it time to time
    while (cheat) {                             
    LOG "-----------------------------------------------------------";
    LOG "Hi. Welcome to the Escape Sequence Cheat Sheet program" ;
    LOG "-----------------------------------------------------------";

    LOG "";
    LOG "Answer to exercise 1-2 : It prionts exacly the C if it is not listed!";
    LOG "\n";
    LOG "=============================================";
    LOG " Which escape sequence are you interested in it's printf( ) syntax? ";
    LOG " 1.  Alert (bell) character.";
    LOG " 2.  Backspace.";
    LOG " 3.  Formfeed.";
    LOG " 4.  Newline ";
    LOG " 5.  Carriage return.";
    LOG " 6.  Horizontal tab.";
    LOG " 7.  Vertical tab.";
    LOG " 8.  Backslash.";
    LOG " 9.  Question mark.";
    LOG " 10. Single quote.";
    LOG " 11. Double quote.";
    LOG " 12. Octal number.";
    LOG " 13. Hexa-Decimal number.";
    LOG "================================================";
flag1: LOG " Type your answer here(from 1 to 13): ";
       GET answer;

       // input control conditions: 1. If Numeric, then it should be 
       // positive int between [1, 13]
       // if contains non-numeric, should be avoided!

    if ((answer > 13) || (answer < 1)) {
        LOG "Invalid answer!";
        goto flag1;
    }





    // switch-case statement to show the right syntax for the 
    // requested escape sequence according to answer

    switch (answer) {

    case(1): LOG "Put 'a' after backslash.";
        break;
    
    case(2): LOG "Put 'b' after backslash.";
        break;
    
    case(3): LOG " Put 'f' after backslash.";
        break;
    
    case(4): LOG " Put 'n' after backslash.";
        break;

    case(5): LOG " Put 'r' after backslash.";
        break;
    
    case(6): LOG " Put 't' after backslash.";
        break;

    case(7): LOG " Put 'v' after backslash.";
        break;

    case(8): LOG " Put DOUBLE BACK-SLASHs after lexical backslash.";
        break;

    case(9): LOG " Put '?' after lexical backslash.";
        break;

    case(10): LOG " Put Single Quote after lexical backslash.";
        break;

    case(11): LOG " Put Double Quote after lexical backslash.";
        break;

    case(12): LOG " Put Three Small O alphabetic letters (ooo) after lexical backslash.";
        break;

    case(13): LOG " Put 'xhh' after lexical backslash.";
        break;


    } // end of switch-case


    LOG " ";
    LOG " ";

    LOG " Do you want to cheat more? (1 for YES /0 for NO) ";
    GET cheat;
    if (cheat == false) exit;
 }
    return 0;
}
// By Sana-Allah Kheiri, Founder and CEO of Paratopic Technologies, LLC.