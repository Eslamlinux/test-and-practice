using namespace std;
#include <iostream>
#include <string.h>

int main(){
/*
char entry[18];
char entry2[]{" etman"};
cout << "enter the value \n";
cin.get(entry,50);
strncat(entry,entry2,4);
for(auto c:entry){
cout << c << " ";
}
cout << endl;
cout << strlen(entry) << endl;
cout << size(entry) << endl;
*/

char st1[]{"eslam,khalid"};
char st2[]{"eslam,khalid"};

int campear = strcmp(st1,st2);
cout << campear << endl;

return 0;
}
