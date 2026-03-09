#include <iostream>
 #include <string> 
 using namespace std;
 int main(){

 string N,P, NP,CP; 

 int Scum;
 int A=0;
 int C;
 bool L=false;
 
 while(true){
 cout << "\n🛸pili🎄" << endl;
 cout << "1=Sign In" << endl;
 cout << "2=Exit" << endl;
 cout << "3=Forget Password" << endl;
 cout << "4=☹️Anti Scum☹️" << endl;
 
 cout << "choose one: ";
 cin >> C;

if(C==1){

A=0;
L=false;

while(A<3 && !L){
cout << "Enter Username: ";
cin >> N;
cout << "Enter Password: ";
cin >> P;

   if(N=="jesalyn" &&  P=="lyn" ){
   cout << "Log in Succes: \n"; L=true;}
   else{cout << "invalid pass or username\n"; A++;}}
   if(!L){cout << "!!!❤️So many attempt Try Later❤️!!!\n";}}


else if(C==2){cout << "exit naka: "; break;}

else if(C==3){ 
   cout << "Enter username: ";
   cin >>N;

   cout << "\nSearching for username..." << endl;


   if(N=="jesalyn"){cout << "Wow..paldo..Username ky ni exist:\n🎉you can change pass: 🎊\n" << endl;}
   else{cout << "Opps..Username ala exist\nyou can't change pass:😔"; break;}

   cout << "Enter New Pass: ";
   cin >> NP;

   cout << "Re Enter New Pass: ";
   cin >>CP;

   if(NP==CP){cout << "Newpas and re enter pass match:\n 🎉passwordsuccesfuly change🎉" << endl;}
   else{cout << "New Pas and Your Re Enter Pass Not match\n not successfully change boi..baboy" << endl;}}
   
else if(C==4){

cout << "🧐 ️choose ☹️" << endl;
cout << "7=Love Scum" << endl;
cout << "8=Umasa Scum" << endl;
cout << "9=Ghost Scum" << endl;
cout << "10=Friend Scum" << endl;

cout << "what type of scum?: ";
cin >> Scum;

  if (Scum==7){cout << "\nmao ni Ang scum nga moingon og\npangitaon ra niya iya kaugalingon\npero kita na deay lain" << endl;}
     else if(Scum==8){cout << "\nkana dugay kaayo ka gipahuwat huwat\nniya nga sugton pero mass giona pa niya\nsugot imo klasmate aray mo pakak" << endl;}
     else if(Scum==9){cout << "\nAtu niagi mga buwan kamo pa\nngano sila naman lagi run??" << endl;}
     else if(Scum==10){cout << "\nkung amigo rajud tanaw niya\nnimo cge lang ky ma realizes rana\n niya nga Ikaw....Bayothahag " << endl;}
  else{cout << "\ninvalid choices" << endl;}
}   
   
else{cout << "invalid choices" << endl;}}



return 0; }