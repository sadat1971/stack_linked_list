#include <iostream>
#include <string>
#include "stackLL.h"
using namespace std;

int main() {
stackLL<int>* S = NULL;
sfuncs<int> sf;
sf.push(23);
sf.push(24);
sf.push(25);

//sf.printstackLL();
sf.pop();
sf.pop();
sf.pop();
sf.pop();

sf.push(345);
sf.push(23);
sf.peek();

stackLL<string>* STR = NULL;
sfuncs<string> sfs;
sfs.push("hey");
sfs.push("you");
sfs.push("man");
sfs.push("liuf");

sfs.printstackLL();
sfs.pop();
}