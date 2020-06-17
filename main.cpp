#include <iostream>
using namespace std;

void dayOne(){
    /*
 * Types:
 *      string name = "Madhava"
 *      int age = 22
 */
    string name;
    int age;
    cout<<"Please Enter your name: "<<endl;
    cin>>name;
    cout<<"Please Enter your age: "<<endl;
    cin>>age;
    cout<<"Hello World, "<<name<<endl;
    cout<<name<<"'s age is: "<<age<<endl;
    cout<<"5"<<endl;
}

void numberCheck(){
    cout<<"Please enter a number: "<<endl;
    int num;
    cin>>num;
    if(num == 7){
        cout<<"This is Krish Favorite Number"<<endl;
    }
    else if(num == 3){
        cout<<"This is Harshitha fav number";
    }
    else{
        cout<<"OK"<<endl;
    }
}
void leapYear(){
    int year;
    cout<<"Please Enter a year to know if it is a leap year: "<<endl;
    cin>>year;
    if(year%4 == 0 && year != 2020){
        cout<<"This is a leap year and harshita loves leap years"<<endl;
    }
    else if(year == 2020){
        cout<<"WORST YEAR"<<endl;
    }
    else {
        cout << "Sorry this is not a leap year" << endl;
    }
}

void nameCheck(){
    /*
     * "Madhav" != "madhav"
     * HW: tolower(); //tonight
     * hARshiTHa - convert everything into harshitha
     */
    string name;
    cout<<"please enter the name: "<<endl;
    cin>>name;
    if(name == "harshitha") {
        cout << "attends classes regularly";
    }
    else if (name =="madhav") {
        cout << "doesnt attend the classes regularly";
    }
    else {
        cout << "not part of the class";
    }
}

void switchStatement(){
    int number;
    cout<<"Please Enter a number: "<<endl;
    cin>>number;
    switch(number){
        case 1:
            cout<<"This is number 1"<<endl;
            break;
        case 2:
            cout<<"This is number 2"<<endl;
            break;
        case 3:
            cout<<"This is number 3";
            break;
        case 4:
            cout<<"Harshita don't like this number"<<endl;
            break;
    }
}

void switchStateTwo(){
    string name;
    int number;
    cout<<"please enter the number";
    cin>>number;
    switch(number){
        case 3:
            name = "Harshitha";
            break;
        case 7:
            name="krish";
            break;
        default:
            name = "unknown";
            break;
    }
    cout<<"This is the name: "<<name<<endl;
}

void dayOneLoop(){
    int i = 0;
    cout<<"Krish's crush count program"<<endl;
    for(i = 1; i<=16000; i++){
        cout<<"Krish Crush number is: "<<i<<endl;
    }

}

void dayOneLoopTwo(){
    /*
     * j+k
     * 1+1
     * 3+2
     * 5+3
     * 7+4
     * 9+5
     * 11+11
     *
     */
    int k = 1;
    for(int j = 1; j<=99; j+=2){
        cout<<"Addition of the loop J+K: "<<k+j<<endl;
        k++;
    }

}

void loopThree(){
    int k,j;
    k = 0;
    cout<<"multplcation of the loop"<<endl;
    for(j=0;j<=20;j+=2){
        cout<<"multiplication of the loop j*k :"<<j*k<<endl;
        k+=5;
    }
}

void loopFour(){
    cout<<"Input Loop"<<endl;
    int k;
    for(int i = 0; i<100; i+=10){
        cout<<"Please enter a number for addition: "<<endl;
        cin>>k;
        cout<<"Addition is: "<<k+i<<endl;
    }
}

int main(){
    //dayOne();
    //leapYear();
    //nameCheck();
    //numberCheck();
    //switchStatement();
    //switchStateTwo();
    //dayOneLoopTwo();
    //loopThree();
    loopFour();
}