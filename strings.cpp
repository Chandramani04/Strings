
#include <bits/stdc++.h> 
using namespace std;

int main() {
/* 
Decleration of strings :-
string str (n[n is size] , 'character we want to store in string  n times ')
*/  
string str(5,'c') ; 
cout << str<< endl ;  // prints c 5 times 

/*  to prints a sentence/space seperated words 
   getline(cin,string name)  function is used

string str1  ; 
getline(cin,str1) ; // enter the str1 --> chandramani dev pathak 
cout << str1 << endl ; // prints chandramani dev pathak 
*/


/* STRING CONCATINATION  
str1 = cmd 
str2 = pathak
str1.append(str2) -->  add str2 at the end of str1 
if we cout << str1 --> cmdpathak 

another way simply
cout << str1+str2 --> cmdpathak
*/

/* to clear all elements in a string:
    str.clear();
*/


/* COMPARE TWO STRINGS 
   cout << s1.compare(s2) ; 
    if s1 = s2 : return 0 ;
    othwerwise return lexiographically(dictionary) value
    if s1>s2 in lexiographically order : return +ve value
    otherwise s2<s1 : return -ve value 

    s1 = xyz ,s2 = abc ;
    s1>s2 : return +ve 
     
*/
    string str2 = "xyz" ;
    string str3 = "xyz" ;
    cout << str2.compare(str3) << endl ;  // return 0 as both are equal otherwise return lexiographically value


/* CHECK EMPTY STING OR NOT     
string.empty() 
string s = "absdgjsdg" ; 
s.clear() ; // clearing all elemts
// if(s.empty()==1){
//     cout << "string is empty " << endl ;
// } 
cout << s.empty() << endl ;  // return 1 if string is empty 
*/


/*  HOW TO DELETE ELEMENTS FROM THE STRINGS :
    s1.erase(index no after which you want to delete, no of elemts you want to del. further)
*/
    string str4 = "chandramani" ; 
    str4.erase(2,4) ; // after 2nd index to remove 4 characters :del.--> ndra
    cout << str4 << endl ;   // prints chamani 
 
/*  FIND SUBSTRING IN STRING :
 cout << s1.find("substring") ; return the index posi from where substring starts 
*/
 string str5 = "chandramanidevpathak" ; 
 cout << str5.find("dev") << endl ; // return  11 index 
 
/* INSERT A NEW STRING INTO EXISTING STRING ;
    s1.insert(index posi where to insert , "new string") 
*/
string str6 = "chamani" ; // want to insert ndra at 3rd index 
str6.insert(3,"ndra") ; 
cout << str6 <<endl  ; // prints  chandramani
 

/* LENGTH OF STRING :
s1.length() or s1.size() function 
very useful for iterate over each character 
for(int i=0 ; i<s1.length() ;i++){
    cout << s1[i] << endl ; 
}
*/

/*  FIND SUBSTRING OF A STRING :
 s1.substr(index from which you want , upto which index you want)  ; 
*/

string s7 = "chandramanidevpathak" ; // find substring from 11th index upto 3rd index
cout << s7.substr(11 , 3) << endl ; // prints dev  



/* CONVERT STRING TO INTEGER :
 int x = stoi(str) ; 
*/
string s8 = "234" ;
int x = stoi(s8) ;
cout << x << endl ; 

/*CONVERT INT TO STRING 
int x = 564 ; 
string str = to_string(x) 
*/
int y = 874 ;
string y1 = to_string(y) ;
cout << y1 << endl ; 


/* SORTING OF STRING :
inbuilt sort function-->
sort(s.begin() , s.end()) ; 
*/
string y2 = "acdbhegf" ;
sort(y2.begin(),y2.end()) ; 
cout << y2 << endl ;  // prints abcdefgh



/* CONVERT STRING LETTERS TO UPPERCASE AND LOWERCASE :
 string s = "Chandramani Pathak" ; 
   string s1 = "Chandramani Pathak" ; 
   transform(s.begin(),s.end(),s.begin(),::toupper) ;
   cout << s << endl ; // prints -> CHANDRAMANI PATHAK
   transform(s1.begin(),s1.end(),s1.begin(),::tolower) ;
   cout << s1 << endl ; // prints -> chandramani pathak 

*/

    return 0;
}