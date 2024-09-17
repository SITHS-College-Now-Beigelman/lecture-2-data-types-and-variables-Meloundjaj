// Meloundja Joseph 
// Lecture 2
// 9/16/2024

#include <iostream>
#include <string>
using namespace std;
int main ()
{
    //creating varibles 
    int NumNum = 25;
    float Floatnum = 89.34;
    double doublenum = 2.67;
    char charnum = 'A';
    char charymun = 't';
    char charynum2 = 'u'; //ascii
    bool mybooly = false;
    string stringy = "i love wingstop"; // i really want wingstop 
    
    
    int inches;
    inches = 100;
    cout << inches << "  inch(es) = ";
    cout << inches / 12 << " feet (foot) and ";
    cout << inches % 12 << " inch(es) " << endl;

    cout << " t > u = " << (charymun > charynum2 ) << endl;
    cout << " 2 + 3.5 = " << 2 + 3.5 << endl;
    cout << "6 / (4 + 3.9) = " << 6 / (4 + 3.9) << endl; 
    cout << "5.4 * 2 - (13.6 + 18 /2) = " << 5.4 * 2 - (13.6 + 18 /2) << endl;
    return 0;
   
    //output 
   
    /*100  inch(es) = 8 feet (foot) and 4 inch(es) 
      t > u = 0
    2 + 3.5 = 5.5
    6 / (4 + 3.9) = 0.759494
    5.4 * 2 - (13.6 + 18 /2) = -11.8*/
}