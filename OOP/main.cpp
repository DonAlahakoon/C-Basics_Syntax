#include <iostream>

using namespace std;

double division(double n1,double n2){
    if(n2==0){
        throw "Division by zero error";
    }
    return n1/n2;
}


class Book{
    private:
        string title;
        string author;

    public:
        //constructor
        Book(string title,string author){
            this->setTitle(title);//calling setter
            this->setAuthor(author);
        }

        void readBook(){
            cout<<"Reading "<<this->title+"by"+this->author<<endl;
        }
        //getters and setters
        string getTitle(){
            return this->title;
        }
        void setTitle(string title){
            this->title = title;
        }
        string getAuthor(){
            return this->author;
        }
        void setAuthor(string author){
            this->author = author;
        }
};


//I N H E R I T A N C E
class Chef{
public:
    string name;
    int age;

    Chef(string name,int age)
    {
        this->name = name;
        this->age = age;
    }
    void makeChicken()
    {
        cout <<"The chef makes chicken"<<endl;
    }
    void makeSalad()
    {
        cout<<"The chef makes salad"<<endl;
    }
    void makeSpecialDish()
    {
        cout<<"The chef makes special dish"<<endl;
    }
};

class ItalianChef : public Chef{//Italian chef class
public:
    string ctryofOrigin;//specific variable to Italian chef

    //constructor implementing parent constructor
    ItalianChef(string name,int age,string ctryofOrigin):Chef(name,age){
        this->ctryofOrigin = ctryofOrigin;
    }
    void makePasta()
    {
        cout<<"The chef makes pasta"<<endl;
    }
    //overriding parent makeSpecialDish method
    void makeSpecialDish()
    {
        cout<<"The Italian Chef makes special dish"<<endl;
    }
};

// A B S T R A C T I O N
class Vehicle{
public:
    virtual void move() = 0;//abstract function
    void getDescription(){
        cout << "Vehicles are used for transportation"<< endl;
    }
};
class Bicycle : public Vehicle{
public:
    void move(){
        cout << "The bicycle pedals forward"<<endl;
    }
};
class Plane : public Vehicle{
public:
    void move(){
        cout<< "The planes moves through the air"<<endl;
    }
};


int main()
{
    try{
        division(10,0);
    }
    catch(const char* msg)
    {
        cerr <<msg<<endl;
    }



    //C L A S S E S   A N D   O B J E C T S
    Book book1("Harry Potter","JK Rowling");//creating an object from book class
    cout << book1.getTitle()<<endl;

    //I N H E R I T A N C E
    Chef myChef("Gordan Ramsay",50);
    myChef.makeChicken();
    myChef.makeSpecialDish();

    ItalianChef myItalianChef("Massimo Bottura",55,"Italy");
    myItalianChef.makeChicken();
    myItalianChef.makePasta();
    myItalianChef.makeSpecialDish();
    cout<<endl;

    //A B S T R A C T I O N
    Bicycle b;
    b.move();
    b.getDescription();
    Plane myPlane;
    myPlane.move();
    myPlane.getDescription();


    return 0;
}


