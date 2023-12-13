
//Dag 1
#include <iostream>


// int main(){
//     double length = 1.3243234;
//     // double height = 1.99;
//     std::cout << length << std::endl;
//     return 0;
// }





//Dag 2
#include <iostream>

int main(){

    // ------------------Data Types------------------------


    // int i1 = 5;
    // std::cout<< "A1 is gelijk aan= " << i1 << std::endl;

    // int i2;
    // i2 = 2;

    // std::cout << "b= "<< i2 << std::endl;

    //Doubles (double) --> 2.4 | 3.4 | 6.5 | 5.439 |
    //Integers (int) --> 2 | 3 | 6 | 5 |

    // double d1 = 100.8;
    // double d2 = i1; 
    // int i3 = d1; 

    // //Registeren
    // int amountLoggedIn = 0;

    // //Inloggen
    // amountLoggedIn = amountLoggedIn + 1;
    // amountLoggedIn = amountLoggedIn + 1;
    // amountLoggedIn = amountLoggedIn + 1;
    // amountLoggedIn = amountLoggedIn + 1;
    // amountLoggedIn = amountLoggedIn + 1;
    // std::cout << "Aantal Keer ingelogt= "<< amountLoggedIn << std::endl;
    

    // std::cout << "d1= "<< d1 << std::endl;
    // std::cout << "d2= "<< d2 << std::endl;
    // std::cout << "i3= "<< i3 << std::endl;

    // char firstName = 'KSfueir@!#$1234567';
    // char lastName = 'KSfueir@!#$1234567';
    // char username = 'shivabhaggan@gmail.com'; 
    // char password = 'KSfueir@!#$1234567';


    // char c1 = 'a';
    // char c2 = 'b';
    // std::cout << "c1= "<< c1 << std::endl;
    // std::cout << "c2= "<< c2 << std::endl;

    bool flag = false;
    // std::cout << "flag= "<< flag << std::endl;

    // int i1 = 33434;
    // flag = i1;
    // std::cout << "flag= "<< flag << std::endl;
    // double d1 = 0.0;
    // flag = d1;
    // std::cout << "flag= "<< flag << std::endl;


    // auto var = 'testing....';
    // std::cout << "var= "<< var << std::endl;

    // auto a1 = 1;
    // auto a2 = 2.2;
    // auto a3 = 'a';
    // auto a4 = "s";
    // auto a5 = true;
    // auto a6 = 3L;
    // auto a7 = 1'000'000'000'000; //Digit Separator
    // std::cout << "var= "<< a7 << std::endl;
    // auto a8 = 0xFF; 
    // auto a9 = 0b11;

    // ------------------Conditional Statements------------------------
    using std::cout;
    using std::cin;
    using std::endl;

    int x;
    int y;
    cout << "Enter Two Numbers" << endl;
    cin >> x >> y;

    cout << x << " ";
    if (x > y){
        cout << "is larger than ";
    }else{
        cout << "is not larger than ";
    }
    cout << y << endl;
    if((x+y) > 10){  
        cout << "Thanks for choosing larger numbers" << endl;
    }
    else{
        cout << "Thanks for choosing smaller numbers" << endl;
    }

    return 0;
}




