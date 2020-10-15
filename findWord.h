#ifndef findWord_h
#define findWord_h
using namespace std;

string findWord(string str3){
  cout<<"check to see if you spelt a word right"<<endl;
  string str1;
  cin>>str1;
  if(find(Words.begin(),Words.end(),str1)!=Words.end()){
    cout<<"does exist"<<endl;
  }
  else{
    cout<<"word deos not exist"<<endl;
  }
  return str3;
}

#endif