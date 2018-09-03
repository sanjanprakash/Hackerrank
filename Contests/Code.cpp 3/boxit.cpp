
class Box {
    private :
        int l, b, h;
    public :
        Box () {
            l = 0;
            b = 0;
            h = 0;
            BoxesCreated++;
        }
        Box (int x, int y, int z) {
            l = x;
            b = y;
            h = z;
            BoxesCreated++;
        }
        Box (const Box &X) {
            l = X.l;
            b = X.b;
            h = X.h;
            BoxesCreated++;
        }
        ~Box () {
            //BoxesCreated++;
            BoxesDestroyed++;
        }
        int getLength () {
            return l;
        }
        int getBreadth () {
            return b;
        }
        int getHeight () {
            return h;
        }
        long long int CalculateVolume () {
            long long int vol = l;
            vol *= b;
            vol *= h;
            return vol;
        }
        friend ostream& operator<<(ostream& a, Box X) {
            a << X.l << " " << X.b << " " << X.h;
            return a;
        }
        friend bool operator < (Box &x, Box &y) {
            if (x.l < y.l)
                return true;
            else if (x.b < y.b && x.l == y.l)
                return true;
            else if (x.h < y.h && x.b == y.b && x.l == y.l)
                return true;
            else
                return false;
        }
};

