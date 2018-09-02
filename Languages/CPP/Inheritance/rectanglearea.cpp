class Rectangle {
    public :
        int h, w;
        
        void Display () {
            cout << w << " " << h << endl;
        }
};

class RectangleArea : public Rectangle {
    public :
        void Input () {
            cin >> this -> w >> this -> h;
        }
    
        void Display () {
            cout << this -> w * this -> h << endl;
        }
};
