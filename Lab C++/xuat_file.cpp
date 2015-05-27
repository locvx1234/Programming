#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
fstream dataFile;
double num = 17.816392;
dataFile.open("numfile.txt", ios::out);
dataFile << fixed; // Định dạng fixed-point
dataFile << num << endl; //Xuất ra num
dataFile << setprecision(4); // Định dạng 4 phần thập phân sau dấu .
dataFile << num << endl; //Xuất ra num
dataFile << setprecision(3); // Định dạng 3 phần thập phân sau dấu .
dataFile << num << endl; // Xuất ra num
dataFile << setprecision(2); // 2 phần
dataFile << num << endl; // xuất ra
dataFile << setprecision(1); // 1 phần
dataFile << num << endl; // xuất ra
dataFile.close(); // Đóng file
return 0;
}
