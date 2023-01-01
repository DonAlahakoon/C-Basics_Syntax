#include <iostream>
#include <vector>
#include <stdbool.h>

using namespace std;

int addNumbers(int n1,int n2);//signature needed if the method is below the main method

int main()
{
    //F U N C T I O N S
    int num = addNumbers(23,3);
    cout<<num<<endl;


    //I F   S T A T E M E N T S
    bool isStudent = false;
    bool isSmart = false;

    if(isStudent&&isSmart){
        cout << "You are a smart student"<<endl;
    }
    else if(isStudent&&!isSmart){
        cout << "You are a student but not smart."<<endl;
    }
    else{
        cout << "You are not a student nor smart"<<endl;
    }

    //>,<,>=,<=,==
    if(1>3){
        cout <<"number comparison was true "<<endl;
    }
    if('a'>'b'){
        cout <<"Character comparison was true"<<endl;
    }

    string myString ="cat";
    if(myString.compare("cat")==0){ // !=0 for not true
        cout <<"string comparison was true"<<endl;
    }


    //S W I T C H   S T A T E M E N T S
    char myGrade = 'Z';
    switch(myGrade){
    case 'A':
        cout << "You pass "<<endl;
        break;
    case 'F':
        cout <<"You fail"<<endl;
        break;
    default:
        cout <<"Invalid grade"<<endl;
        break;
    }

    //W H I L E   L O O P S
    int index = 1;
    while(index<=5){
        cout <<index <<endl;
        index++;
    }
    do{
        index--;
        cout <<index <<endl;
    }while(index>1);
    cout <<"\n"<<endl;

    // F O R   L O O P S
    for(int i=0;i<5;i++){
        cout << i <<endl;
    }


    return 0;
}

int addNumbers(int n1,int n2){
    return n1+n2;
}
