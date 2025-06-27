#include<iostream>
using namespace std;
/*
Funtion - It is a bloack of code that perform a specific task.
You call it whenever needed.
syntax:
return_type function_name
{
//code to execute
}

*/
//type 1 without Parameter and without return type
void hi(); // function delaration
void hello()
{
	cout<<"Hello Students";
}
int main()
{
	hi(); // function call
 hello();
}
void hi() // function definition
{
	cout<<"Hi students"; 
}
