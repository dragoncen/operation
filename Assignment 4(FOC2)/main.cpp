#include <iostream>

using namespace std;

int main()
{
     char opt;
    do{
    int num1, num2;
    char opera;
    cout<<"Enter your first number>>";
    cin>>num1;

    cout<<"Enter another number>>";
    cin>>num2;
    cout<<"Choose an operator.\n+(Add)\n-(Subtract)\n*(Multiply)\n/(Divide)\n";
    cin>>opera;

    switch(opera){
    case '+':
        cout<<"The result is>>"<< num1 + num2<<endl;
        break;

    case '-':
        cout<<"The result is>>"<<num1 - num2<<endl;
        break;

    case '*':
        cout<<"The result is>>"<<num1 * num2<<endl;
        break;

    case '/':
        cout<<"The result is>>"<<num1/num2<<endl;
        break;


    }
    cout<<"Do you want to do another calculation?(y or n)\n";
    cin>>opt;

    }while(opt == 'y');
    return 0;
}
