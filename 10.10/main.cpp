#include <iostream>
#include <time.h>

using namespace std;

void zadanie1(){
    string name;
    cout<<"Podaj imie "<<endl;
    cin>>name;
    int len = name.length();
    for(int i = len - 1; i >=0; i--) {
        cout<<name[i]<<"";
    }
    cout<<endl;
}

void zadanie2() {
    int start_range, end_range;
    int number;
    cout<<"Podaj poczatek zakresu"<<endl;
    cin>>start_range;
    cout<<"Podaj koniec zakresu"<<endl;
    cin>>end_range;
    cout<<"Podaj liczbe przez ktora dzielimy"<<endl;
    cin>>number;

    for(int i = start_range; i <= end_range; i++) {
        if(i % number == 0) {
            cout<<i<<" ";
        }
    }
}

void zadanie3(){
    int number;
    cout<<endl;
    cout<<"Podaj liczbe do obliczenia silni "<<endl;
    cin>>number;

    int sum = 1;
    for(int i = 1; i <=number;i++) {
        sum = sum * i;
    }

    cout<<"Silnia z liczby "<<number<< " to "<<sum<<endl;
}

void zadanie4(){
    float sum = 0;
    int counter = 0;
    int number;
    cout<<"Podaj liczbe "<<endl;
    cin>>number;
    while(number !=0){
        sum+=number;
        counter++;
        cin>>number;
    }
    cout<<"Srednia liczb to "<<sum/counter<<endl;
}

void zadanie5() {
    srand(time(NULL));
    int random_number = rand() % 101;
    int choice;
    //cout<<"Losowa liczba to "<<random_number<<endl;
    cout<<"Zgadnij liczbe "<<endl;
    cin>>choice;
    int counter = 0;
    while(choice != random_number) {
        if(choice > random_number) {
            cout<<"Szukana liczba jest mniejsza !"<<endl;
            counter ++;
        }
        else if(choice < random_number) {
            cout<<"Szukana liczba jest wieksza !"<<endl;
            counter++;
        }
        cout<<"Podaj nastepna liczbe "<<endl;
        cin>>choice;
    }
    cout<<"Udalo ci sie zgadnac po "<<counter+1<< " probach"<<endl;

}



int main()
{
    zadanie1();
    zadanie2();
    zadanie3();
    zadanie4();
    zadanie5();
    return 0;
}
