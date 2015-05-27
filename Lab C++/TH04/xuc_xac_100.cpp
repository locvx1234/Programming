/* Su dung do xuc xac de viet tro choi cho 2 nguoi
 * Tong cac lan xuc xac bang 100 hoac 99 truoc la nguoi thang
 * Diem khong duoc vuot qua 100, neu qua thi luot do khong tinh
 */
#include "iostream"
#include "cstdlib"
#include "ctime"
using namespace std;
int xuc_xac()
{
    int result ;
    result = 1 + rand () % (6);
    return result;
}
int main()
{
    int point_person1 = 0, point_person2=0, cube1, cube2, cube3, cube4;
    srand(time(0));
    while (point_person1 <= 100 && point_person2 <= 100)
    {
        cube1 = xuc_xac();
        cube2 = xuc_xac();
        cube3 = xuc_xac();
        cube4 = xuc_xac();
        if ((point_person1 + cube1 + cube2) <= 100 )
        {
            point_person1 += (cube1 + cube2);

        }
        if (( point_person2 + cube3 + cube4) <= 100)
        {
            point_person2 += (cube3 + cube4);
        }
        cout << "2 xuc xac nguoi choi 1 : " << cube1 << "   " << cube2 << "     " << "Tong nguoi 1: " << point_person1 <<endl;
        cout << "2 xuc xac nguoi choi 2 : " << cube3 << "   " << cube4 << "     " << "Tong nguoi 2: " << point_person2 <<endl;

        if (point_person1 == 100 || point_person1 == 99 || point_person2 == 100 || point_person2 == 99)
        {
            if (point_person1 == 100|| point_person1 == 99)
            {
                cout << "Nguoi thu 1 thang cuoc" << endl;
                break;
            }
            else
            {
                cout << "Nguoi thu 2 thang cuoc" << endl;
                break;
            }
        }

    }
    return 0;
}
