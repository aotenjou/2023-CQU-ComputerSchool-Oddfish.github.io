string Person::getName()
{
    return m_name;
}
void Person::show()
{
    cout<< m_name;
}
void Student::show()
{
    Person::show();
    cout<<" "<<m_a<<" "<<m_b<<" "<<m_c<<" "<<fixed<<setprecision(2)<<(m_a+m_b+m_c)/3.00<<endl;
}
double Student::getAvg()
{
    return (m_a+m_b+m_c)/3.00;
}
Student::Student(string name , int id , double a ,double b ,double c ):Person(name),m_id(id),m_a(a),m_b(b),m_c(c){}
Person::Person(string name):m_name(name){}