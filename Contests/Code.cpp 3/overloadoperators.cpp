Complex operator + (Complex x, Complex y) {
    Complex z;
    z.a = x.a + y.a;
    z.b = x.b + y.b;
    return z;
}

ostream& operator << (ostream &os, Complex x) {
    os << x.a << "+i" << x.b;
    return os;
}
