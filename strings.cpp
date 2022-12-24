#include <bits/stdc++.h>
using namespace std;
int append(string n1, string n2)
{
   cout << n1.append(n2) << endl;
}
int clea(string n1)
{
   (n1).clear();
   return true;
}
int campare(string n1, string n2)
{
   n1.compare(n2); // here comparing n1 with n2
}
int erase()
{
   string name = "kirtishukla";
   name.erase(3, 5); // here erase function has two parameters that are index , till then
   cout << endl
        << name;
}
int find(string n1)
{
   if (!n1.find("poop"))
   {
      cout << endl
           << "not found";
   }
   else
   {
      cout << endl
           << n1.find("kirti"); // returns starting index number
   }
}
int insert(string n1)
{
   n1.insert(3, "LOL"); // inserting on position , what to be inserted
   cout << endl
        << n1;
}
int substitue(string s1)
{
   string s = s1.substr(1, 4); // want till position to till position from 1
   cout << endl
        << s;
}
int vertoint(string n)
{
   int x = stoi(n);
   cout << endl
        << x<<endl; // converted string into integer
}
int vertistring()
{
   int x = 2334;
   cout << to_string(x) + "10"<<endl;//coverted integer to string 
}
int sorting(string n){
sort(n.begin(),n.end());//gives back in alphabetical order 
cout<<n;

}

int main()
{
   append("hello", "world");
   cout << clea("hello") << endl;
   cout << campare("bjkb jhb hcfgcxyv ", "bjhvhgcgfxdrdrxch");
   erase();
   find("kirtishukla");
   insert("sunkissed ");
   substitue("nincompoop");
   vertoint("2334r");
   vertistring();
   sorting("kirti shukla");
}
