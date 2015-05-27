#include <iostream>

using namespace std;
class DIEM(){
    private:
        int x, y,m ;
    public:
        void nhapsl();
        void hien();
        void an();{
            putpixel(x,y,getbkcolor());
        }
};

void DIEM::nhapsl(){
    cout << "Nhap hoanh do, tung do: ";
    cin >>x;
    cout >> ", ";
    cin >>y;
    cout << "Nhap mau sac: ";
    cin >> m;

}

void DIEM::hien(){
    int mau_ht;
    mau_ht = getcolor();
    putpixel(x,y,m);
    setcolor(mau_ht);
}
void DIEM::doan_thang (DIEM d2, int mau){
    int mau_ht;
    mau_ht = getcolor();
    setcolor(mau);
    line(this->x, this->y, d2.x, d2.y);
    setcolor(mau_ht);
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
