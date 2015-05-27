 //! @brief Use funcions in <iomanip>
 /** Parametric manipulators
  * \setiosflags()    --- Set format flags
  * \resetiosflags()  --- Reset format flags
  * \setbase()        --- Set basefield flag
  * \setfill()        --- Set fill character
  * \setprecision()   --- Set decimal precision
  * \setw()           --- Set field width
   <ios>
  */
#include <iostream> // std::cout std::cin std::hex std::fixed std::showpoint std::ios
#include <iomanip>  // std::setprecision std::setiosflags
using namespace std;

int main(){
    float a, b;
    cout << "Please enter 2 number " << endl;
    cin >> a >> b;
    cout << fixed << showpoint << setprecision(2);
    cout << "Two real number you just enter: " << endl << a << setw(25) << b << endl;

    cout << "My phone num: "<< setfill('x')  << setw(11) << 597 << endl;

    cout << hex << setiosflags( ios::showbase | ios::uppercase ) ;
    cout << 5 << "-"<< 10 << "-" << 11 << "-" <<  100 << "-" << 1234 << endl;


    return 0;
}



