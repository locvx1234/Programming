int UCLN(int a,int b)
    {
        return (b==0)?a:UCLN(b, a%b);
    }
int ucln3(int a,int b,int c)
    {
        return UCLN(UCLN(a,b),c)
    }
