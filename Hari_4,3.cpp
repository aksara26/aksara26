#include <iostream>
using namespace std;
int main(){
string UsernameBenar, PasswordBenar, UsernameInput, PasswordInput;
UsernameBenar = "Arya";
PasswordBenar ="4720261611043";
cout<<"Masukkan Username : ";
cin>>UsernameInput;
cout<<"Masukkan Password : ";
cin>>PasswordInput;
if(UsernameInput == UsernameBenar && PasswordInput == PasswordBenar){
cout<<"Login Berhasil";
}
else{
cout<<"Login Gagal";
}






    return 0;
}