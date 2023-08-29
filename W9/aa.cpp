class X {
    public:
        X(int v) : v(v){ }
        static void f(int x)  {v = x;}
        void g(int x) { v = x;}
    private:
        int v;


};