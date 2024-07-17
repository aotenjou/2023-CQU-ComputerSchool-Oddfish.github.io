class Student{
	protected:
    	int s1,s2,s3,s4,s5;
    	string name,num;
    	char gs;
	public:
		static float max;
		Student(){
			s1=s2=s3=s4=s5=0;
			num="";
			name="";
		}
		virtual void display()=0;
};
float Student::max=0;
class GroupA:public Student{
	public:
		GroupA(string nu,string na,int S1,int S2){
			name=na;
			num=nu;
			s1=S1;
			s2=S2;
			if((s1+s2)>max)
			 max=s1+s2;
		}
		void display(){
			if((s1+s2)==max)
			 cout<<num<<" "<<name<<endl;
		}
};
class GroupB:public Student{
	public:
		GroupB(string nu,string na,int S1,int S2,char Gs){
			name=na;
			num=nu;
			s1=S1;
			s2=S2;
			gs=Gs;
			if((s1+s2)>max)
			 max=s1+s2;
		}
		void display(){
			if((s1+s2)>=max*0.7&&gs=='A'||(s1+s2)>=max)
			 cout<<num<<" "<<name<<endl;
		}
};
class GroupC:public Student{
	public:
		GroupC(string nu,string na,int S1,int S2,int S3,int S4,int S5){
			name=na;
			num=nu;
			s1=S1;
			s2=S2;
			s3=S3;
			s4=S4;
			s5=S5;
		}
		void display(){
			if((s1+s2+s3+s4+s5)/5.0>=max/2.0*0.9)
		    	cout<<num<<" "<<name<<endl;
		}
};