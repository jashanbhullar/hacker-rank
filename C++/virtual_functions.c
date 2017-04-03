/*
* Contributer : github.com/tanmayah8958
* Email : tanmayag8958@gmail.com
*/


int count1=1;
int count2=1;
class Person
{
    public:
    virtual void getdata()=0;
    virtual void putdata()=0;
};

class Professor:public Person
    {
    int idp;
    char name[100];
    int age,p;
    public:
      Professor()
          {
          idp=count1;
          count1++;
      }
       void getdata()
           {
           cin>>name>>age>>p;
       }
       void putdata()
           {
           cout<<name<<" "<<age<<" "<<p<<" "<<idp<<endl;
       }
};
class Student:public Person
    {
    int ids;
    char name[100];
    int age,marks[6];
    public:
       Student()
           {
           ids=count2;
           count2++;
       }
    void getdata()
        {
        cin>>name>>age;
        for(int i=0;i<=5;i++)
            cin>>marks[i];
    }
    void putdata()
        {
        int total=0;
        for(int j=0;j<=5;j++)
            total=total+marks[j];
        cout<<name<<" "<<age<<" "<<total<<" "<<ids<<endl;
    }
};
