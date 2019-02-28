#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main()
{
cout<<"HELLO"<<endl<<"YOUR SECRET CODE PLEASE:";
int code;
cin>>code;
if(code==116)
  {cout<<"WELCOME ";
    ofstream outputfile;
  ifstream inputfile;
   inputfile.open("afile.dat");
  outputfile.open("bfile.dat");
     string alphabet {" abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
  string key {"[XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
  string secret_message {};


string decrypted_message {};

getline(inputfile,secret_message);
for(char c:secret_message)
{
  size_t position = key.find(c);
  if(position!=string::npos)
  {
    char new_char {alphabet.at(position)};
    decrypted_message += new_char;
  }
  else{
    decrypted_message += c;
  }
}

outputfile<<decrypted_message;
inputfile.close();
outputfile.close();}
else {
ofstream outputfile;
outputfile.open("bfile.dat");
outputfile<<"YOU ARE NOT ALLOWED TO ACCESS"<<endl;
 cout<<"WRONG CODE"<<endl<<"YOU ARE NOT ALLOWED TO ACCESS";
outputfile.close();
}

}

Code for DECRYPTION :-

#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main()
{
  cout<<"HELLO" <<endl<<"YOUR SECRET CODE PLEASE:";
  int code;
  cin>>code;
  if(code==116)
  {
    ofstream outputfile;
  ifstream inputfile;
   inputfile.open("afile.dat");
  outputfile.open("bfile.dat");
     string alphabet {" abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
  string key {"[XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
  string secret_message {};

  getline(inputfile,secret_message);

  string encrypted_message;

for(char c:secret_message)
{
  size_t position = alphabet.find(c);
  if(position!=string::npos)
  {
    char new_char {key.at(position)};
    encrypted_message += new_char;
  }
  else{
    encrypted_message += c;
  }

}
outputfile<<encrypted_message;
outputfile.close();
inputfile.close();}
else
{
  ofstream outputfile;
  outputfile.open("bfile.dat");
  outputfile<<"YOU ARE NOT ALLOWED TO ACCESS"<<endl;
   cout<<"WRONG CODE"<<endl<<"YOU ARE NOT ALLOWED TO ACCESS";
  outputfile.close();
}

}
