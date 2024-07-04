# include <iostream>
 using namespace std;

/*int main(){

string st;
cout<<"enter the string";
cin>>st;
string st1="";





for(int i=st.size()-1;i>=0;i--){
    st1.push_back(st[i]);
}
cout<<st1<<endl;
if(st==st1){
    cout<<"palindrome";
}
else
    cout<<"it is not";



}*/




//reverse the index value






/*int main(){
string str[5]={"mom","apple","nitin","banana","www"};
string final="";
for (int j=0;j<5;j++){
    string temp=str[j],str1="";


    for(int i=temp.size()-1;i>=0;i--){
        str1.push_back(temp[i]);
    }

    if(temp==str1&&temp.size()>2)
        final=final+temp+"  ";
}
cout<<final<<endl;
}
*/



//pryamid

















//#include <ctype.h>




/*string removeSpecialCharacters(string str) {
  string result = "";
  for (int i = 0; i < str.length(); i++) {
    if (isalnum(str[i]) || isspace(str[i])) {
      result += str[i];
    }
  }
  return result;
}

int main() {
  string str = "abcd$js#@acde$";
  string result = removeSpecialCharacters(str);
  cout << "Output string: " << result << endl;

}
*/











int main(){
string s="abcd$js&#@acdes";
string result;


for(int i=0;i<=s.size();i++){
    if((s[i]='a'&&s[i]<='z')||(s[i]='A'&&s[i]<='Z')||(s[i]='0'&&s[i]<='9')||(s[i]=' '&&s[i]<=' ')){
            result.push_back(s[i]);

    }

    else{
        if(result[i-1]==' ')
            continue;
        else
            result.push_back(' ');
    }
}
cout<<s<<endl;
cout<<result<<endl;



}
