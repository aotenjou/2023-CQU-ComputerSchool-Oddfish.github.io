class Fruit{
    public:
        int weight;
        Fruit(int a):weight(a){
            cout<<"Fruit Constructor\n";
        }
        virtual ~Fruit(){
            cout<<"Fruit Destructor\n";
        };
        virtual void display()
        {
            cout<<"weight="<<weight<<endl;
        }
};
class Pear:public Fruit{
    public:
        string origin;
        Pear(string x,int y):origin(x),Fruit(y){
            cout<<"Pear Constructor\n";
        }
        ~Pear(){cout<<"Pear Destructor\n";}
    void display(){
        cout<<"origin="<<origin<<",weight="<<weight<<endl;
    }
};