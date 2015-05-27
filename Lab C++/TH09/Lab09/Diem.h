#ifndef Diem_h
#define Diem_h

class Diem{
    public:
        Diem(float t, float h);
        Diem();
        float gettung() const;
        float gethoanh() const;
        void hienthi();
        float khoangcach(Diem d1);
        void nhapsl();
       // void daydiem(int N,Diem *p);
    private:
        float tung;
        float hoanh;
};

#endif
