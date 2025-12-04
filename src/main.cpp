#include <bits/stdc++.h>
using namespace std;


int main() {
  // Flush after every std::cout / std:cerr
  cout << std::unitbuf;
  cerr << std::unitbuf;

  // TODO: Uncomment the code below to pass the first stage
  cout << "$ ";


  // i had to write only one command not found
  string cmd;
  getline(cin,cmd);
  cout<<cmd<<": command not found\n";



  // i had to write the command not found until user doesn't stop
  cout<<"$ ";
  while(true){
    string cmd1;
    getline(cin,cmd1);

    if(cmd1=="exit") break; // implementing the exit builtin

    cout<<cmd1<<": command not found\n";
    cout<<"$ ";  
  }



}
