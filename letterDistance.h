#ifndef letterDistance_h
#define letterDistance_h
using namespace std;

string letterDistance(string str1, string str2){
  int x=0;
      if(str1=="END"&&str2=="END"){
        end();
      }
      char cstr1[str1.size()];
      char cstr2[str2.size()];
        str1.copy(cstr1, str1.size());
        str2.copy(cstr2, str2.size());
        for(long unsigned int i=0; i<str1.size(); i++){
          x+=abs(int(cstr1[i])-int(cstr2[i]));
        }
        cout<<x<<endl;
	      return 0;
}

#endif