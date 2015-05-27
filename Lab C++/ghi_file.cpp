#include <iostream>
#include <fstream>
using namespace std;
int main()
{
fstream dataFile;

cout << "Thuc hien mo File...\n";
dataFile.open("demofile.txt", ios::out); // Mở file để ghi vào
cout << "Du lieu duoc ghi xuong file.\n";
dataFile << "Vu\n"; // Ghi dòng thứ 1
dataFile << "Xuan Loc\n"; // Ghi dòng thứ 2
dataFile << "locvx1234 \n"; // Ghi dòng thứ 3
dataFile.close(); // Đóng file
cout << "Xong.\n";
return 0;
}
