#include<iostream>
#include "arrayList.h"

using namespace std;

int main(){

  ArrayList<int, string> al;

  al.add(1, "one");
  al.add(2, "two");
  al.add(3, "three");
  al.add(3, "three");
  al.add(3, "three");

  int n = al.size();

  for(int i=0;i<n;i++)
    cout << (al.get(i)).first << " " << (al.get(i)).second << endl;

}