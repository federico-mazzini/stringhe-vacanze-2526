#include <iostream>
#include <string>
#include <ctime>
using namespace std;

const string FraseGlobale="Fiorentina";


char primoCarattereMaiuscolo(char s) {
        s = toupper(s);
    return s;
}
bool controlloVocali(char E2){
string Vocali="aeiou";
for(int i=0;i<5;i++){
    if(E2==Vocali[i]){

    return false;
        }
    }
    return true;
}



char generaE2(){
    char E2;

do{
E2=rand()%26+97;
}while(controlloVocali(E2)==false);


    return  primoCarattereMaiuscolo(E2);
    }

char generaE67(){
    char E67;
E67=rand()%26+97;
    return  primoCarattereMaiuscolo(E67);
    }


int generaNumeroRandom(){
int E=rand()%10;
return E;
}

string generaTarga(){

string targa="";

char E1=FraseGlobale[3];
char E2=generaE2();
int E3=generaNumeroRandom();
int E4=generaNumeroRandom();
int E5=generaNumeroRandom();
char E6=generaE67();
char E7=generaE67();
    targa.append(1, E1);
    targa.append(1, E2);
    targa.append(to_string(E3));
    targa.append(to_string(E4));
    targa.append(to_string(E5));
    targa.append(1, E6);
    targa.append(1, E7);
   return targa;
}



string generaTarga1(string targa){
int y = targa.length();
targa.replace(1,1,"%");
targa.replace(5,1,"%");

return targa;

}
string generaTarga2(string targa){
int y = targa.find("i");
for(int i=2;i<5;i++){
targa.replace(i,1,"X");
}
return targa;

}
string invertiTarga(string targa){
for(int i=0;i<3;i++){
    char app=targa[i];                                 //metodo 1
    targa[i]=targa[6-i];
    targa[6-i]=app;

}

return targa;

}
string invertiTarga4(string targa){
for(int i=0;i<3;i++){
    char app=targa.at(i);
    targa[i]=targa.at(6-i);
    targa.at(6-i)=app;

}

return targa;

}
string invertiTarga2(string targa){
    string invertita = "";

    for(int i = targa.length() - 1; i >= 0; i--){      //metodo 2
        invertita += targa.substr(i, 1);
    }

    return invertita;
}
void funzione3(string targa, char p){


int a=targa.find(p);
if (a<7 && a>0){

cout<<"char trovato alla posizione "<<a<<endl;
} else{
cout<<"char non trovato"<<endl;
}


}
void funzione5(string targa, int I){

string num=to_string(I);
int a=targa.find(num);
if (a<5 && a>1){

cout<<"char trovato alla posizione "<<a<<endl;
} else{
cout<<"char non trovato"<<endl;
}


}

int main()
{
    string targa;
    int risp;
    char p;
    int I;

srand(time(NULL));
p=rand()%26+65;
I=rand()%9+1;
targa=generaTarga();
cout<<"La targa e': "<<targa<<endl;
cout<<"Char generato: "<<p<<endl;
cout<<"Int generato: "<<I<<endl;
do{
cout<<"Seleziona 1:targa con %(alla 2 e penultima posizione)"<<endl;
cout<<"Seleziona 2:targa invertita con substr()"<<endl;
cout<<"Seleziona 3:targa e char"<<endl;
cout<<"Seleziona 4:targa con X al posto dei numeri"<<endl;
cout<<"Seleziona 5:targa invertita con at()"<<endl;
cout<<"Seleziona 6:targa e int"<<endl;
cout<<"Seleziona 7:Uscita"<<endl;
cin>>risp;
switch(risp){

case 1:
   cout<<"targa aggiornata: "<<generaTarga1(targa)<<endl;
break;

case 2:

cout<<"targa invertita: "<<invertiTarga(targa)<<endl;
    break;


case 3:
        funzione3(targa,p);

    break;

case 4:
    cout<<"targa aggiornata: "<<generaTarga2(targa)<<endl;
    break;

case 5:
    cout<<"targa invertita: "<<invertiTarga4(targa)<<endl;
    break;
case 6:

    funzione5(targa,I);
    break;
}
}while(risp!=7);
    return 0;
}
