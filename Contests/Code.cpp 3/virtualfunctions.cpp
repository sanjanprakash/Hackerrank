int st_id = 1, prof_id = 1;
class Person {
    public :
        std::string name;
        int age;
        Person () {
            //name = new char [20];
        }
        virtual void getdata () {
            
        }
        virtual void putdata () {
            
        }
};

class Professor : public Person {
    public :
        int publications, cur_id;
        Professor () {
           // cur_id = 1;
        }
        void getdata () {
            cin >> name >> age >> publications;
            cur_id = prof_id;
            prof_id++;
        }
        void putdata () {
            cout << name << " " << age << " " << publications << " " << cur_id << endl;
        }
};

class Student : public Person {
    public :
        int cur_id, marks [6], sum;
        Student () {
            sum = 0;
        }
        void getdata () {
            cin >> name >> age >> marks [0] >> marks [1] >> marks [2] >> marks [3] >> marks [4] >> marks [5];
            for (int i = 0; i < 6; i++)
                sum += marks [i];
            cur_id = st_id;
            st_id++;
        }
        void putdata () {
            cout << name << " " << age << " " << sum << " " << cur_id << endl;
        }
};
