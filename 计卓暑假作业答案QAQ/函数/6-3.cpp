class Circle{
    public:
        double r;
        Circle(double r):r(r){};
        double getArea()
        {
            return 3.14*r*r;
        }
        friend Circle operator++(Circle&a)
        {
            a.r++;
            return a;
        }
        Circle operator++(int) {  
        Circle temp = *this;  
            ++r;  
            return temp;  
        }
        friend Circle operator--(Circle&a)
        {
            a.r--;
            return a;
        }
        Circle operator--(int) {  
        Circle temp = *this;  
            --r;  
            return temp;  
        }
};
