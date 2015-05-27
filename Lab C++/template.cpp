#include <iostream>
using namespace std;

template <class TYPE>
class Array {
    private:
        TYPE * v;
        int len;
        void range(int) const;
        void copy(const Array<TYPE> &);
        void free() { delete [] v ;};
    public:
        Array(int length = 1);
        Array(const Array<TYPE> & a);
        ~Array() { free(); }
        Array<TYPE> & operator=(const Array<TYPE> &);
        TYPE & operator[](int);
        const TYPE & operator[](int) const;
        int length() const { return len; }

};
class ArrayError {
private:
char buf[80];
public:
ArrayError(int s) {
sprintf(buf, "%d is an illegal length", s);
}
ArrayError(int index, int maxindex) {
sprintf(buf, "subscript %d out of bounds,max subscript = %d", index, maxindex - 1);
}
void response() const { cerr << buf << endl; }
};
template <class TYPE>
void Array<TYPE>::range(int i) const {
if (i < 0 || i >= len) throw ArrayError(i, len);
}
template <class TYPE>
Array<TYPE>::Array(int length) {
if (length <= 0) throw ArrayError(length);
v = new TYPE [len = length];
}
template <class TYPE>
Array<TYPE>::Array(const Array<TYPE> & a) {
copy(a);
}
19
template <class TYPE>
Array<TYPE> & Array<TYPE>::operator=
(const Array<TYPE> & a) {
if (this != &a) {
free();
copy(a);
}
return *this;
}
template <class TYPE>
ostream & operator<<(ostream & os, const
Array<TYPE> & a) {
for (int i = 0; i < a.length(); i++)
os << a[i] << ' ';
return os;
20
}template <class TYPE>
TYPE & Array<TYPE>::operator[](int i) {
range(i);
return v[i];
}
template <class TYPE>
const TYPE & Array<TYPE>::operator[](int i) const {
range(i);
return v[i];
}
21
int main() {
try {
Array<int> a(10), b(10);
for (int i = 0; i < a.length(); i++)
a[i] = i + 1;
cout << a << endl;
b = a;
cout << b << endl;
Array<double> c(10);
for (i = 0; i < c.length(); i++)
c[i] = 0.5 * i;
const Array<double> d = c;
cout << d << endl;
}
catch (const ArrayError & e) {
e.response();
return 1;
}
return 0;
}
