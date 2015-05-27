#ifndef PHAN_SO_H
#define PHAN_SO_H

class Phan_so{
    public:
        Phan_so(int tu, int mau);
        Phan_so();
        int UCLN(int a, int b);
        int gettu() const;
        int getmau() const;
        Phan_so operator+(Phan_so);
        Phan_so operator-(Phan_so);
        void Toi_gian();
        void Output();
        void Input();
    private:
        int tu_so, mau_so,a,b,tmp;


};

#endif
