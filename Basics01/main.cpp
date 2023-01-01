#include <iostream>
#include <string>
#include <stdbool.h>

using namespace std;

int main()
{
    //P R I N T I N G
    cout << "Hello world!" << endl;//'endl' use to have new line

    //V A R I A B L E S
    string name = "Mike"; //strings of characters not primitive
    char testGrade = 'A'; //single 8- bit character

    //can make them unsigned by adding "unsigned" prefix
    short age0 = 10;        //atLeast 16-bit signed integer
    int age1 = 20;          //atLeast 16-bit signed integer
    long age2 = 30;         //atLeast 32-bit signed integer
    long long age3 = 40;    //atLeast 64-bit signed integer

    float gpa0 = 2.5f;      //single precision floating point
    double gpa1 = 3.5;      //double-precision floating point
    long double gpa2 = 3.5; //extended precision floating point

    bool isTall;        //1 bit
    isTall = true;

    name = "John";

    cout << "Your name is "<< name << endl;



    //C O N S T A N T S
    const int BIRTH_YEAR = 1945;
    cout <<BIRTH_YEAR<<endl;

    //C A S T I N G
    cout <<(int)3.14<<endl;
    cout <<(double)3/2<<endl;

    //P O I N T E R S
    int num = 10;
    cout <<&num<<endl;

    int *pNum = &num;
    cout <<pNum<<endl;
    cout <<*pNum<<endl; //dereferencing

    //S T R I N G S
    string greeting = "Hello";
    //indexes: 01234

    cout <<greeting.length()<<endl;
    cout <<greeting[0]<<endl;
    cout <<greeting.find("ll0")<<endl;
    cout <<greeting.substr(2)<<endl;
    cout <<greeting.substr(1,3)<<endl;

    //N U M B E R S
    cout <<2*3<<endl;
    cout <<10%3<<endl; //returns the remainder
    cout <<(1+2)*3<<endl;
    cout <<10/3<<endl;

    int num = 10;
    num+=100; //+=,-=,/=,*=;
    cout << num <<endl;
    num++;
    cout << num <<endl;

    //A R R A Y S
    //int luckyNumbers[6];
    int luckyNumbers[] = {4,8,15,16,23,42};
    //indexes:            0 1 2 3 4 5
    luckyNumbers[0] = 90;
    cout <<luckyNumbers[0]<<endl;
    cout <<luckyNumbers[1]<<endl;

    //N Dimensional array

    //int numberGrid[2][3];
    int numberGrid[2][3] = {{1,2,3},{4,5,6}};
    numberGrid[1][1] = 99;

    cout <<numberGrid[0][0]<<endl;
    cout <<numberGrid[1][1]<<endl;

    // V E C T O R S
    vector<string> friends;
    friends.push_back("Oscar");
    friends.push_back("Angela");
    friends.push_back("Kevin");
    friends.insert(friends.begin()+1,"Jim");//insert into index 1

    cout<<friends.at(0)<<endl;
    cout<<friends.at(1)<<endl;
    cout<<friends.at(2)<<endl;
    friends.erase(friends.begin()+1);//Erasing "Angela"
    cout<<friends.at(2)<<endl;

    //U S E R   I N P U T
    string name;
    cout <<"Enter your name:";
//    cin >>name;
    cout <<"Hello "<<name<<endl;

    int num1,num2;
    cout <<"Enter first number";
//    cin >>num1;
    cout <<"Enter second number";
//    cin >>num2;
    cout <<"Total:"<<num1+num2<<endl;



    return 0;
}
