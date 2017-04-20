#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main(){
    char str[25];
    char pig[25] = "";
    char two[25] = "";
    char one[25] = "";
    int len = 0;
    int i;
    
   cout<<"Enter a Word: "<<endl;
   std::cin >> str;
   
   len = strlen(str);
   
   for(i = 0; i < len; i++){
       str[i] = toupper(str[i]);
       
   }
   strncat(two,str,2);
   strncat(one,str,1);
   if(strcmp(two,"WH")==0 || strcmp(two,"TH")== 0 || strcmp(two,"QU")== 0 || strcmp(two,"SH")== 0 || strcmp(two,"CH")== 0 || strcmp(two,"PH")== 0){
       strcat(pig,&str[2]);
       strcat(pig,two);
       strcat(pig,"AY");
       std::cout << pig << std::endl;
   }
   
   else if(strcmp(one,"A") ==0 || strcmp(one,"E") == 0 || strcmp(one,"I") == 0 || strcmp(one,"O") == 0 || strcmp(one,"U") ==0){
       strcpy(pig,str);
       strcat(pig,"AY");
       std::cout << pig << std::endl;
   }
   
   else{
       strcpy(pig,&str[1]);
       strcat(pig,one);
       strcat(pig,"AY");
       std::cout << pig << std::endl;
       
   }
}