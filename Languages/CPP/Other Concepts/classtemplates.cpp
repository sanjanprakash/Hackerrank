template <class T>
    class AddElements {
        public :
            T ele;
            AddElements (T x) {
                ele = x;
            }
            
            T add (T x) {
                ele += x;
                return ele;
            }
    
            T concatenate (T x) {
                ele += x;
                return ele;
            }
};
