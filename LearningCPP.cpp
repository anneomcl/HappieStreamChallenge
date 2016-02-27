using namespace std;
#include <iostream>
#include <string>
#include <vector>
/*
int main(int argc, char *argv[])
{
	//Ints, floats, doubles
	int x = 1; //32 bits
	float y = 1.0; //32 bits
	//00000000 -> sigificuaudnd, mantissa, base. 1.2345 -> 12345 * 10^-4
	double z = 1.0; //64 bits
	//000000000000000 -> more precise or larger numbers

	//Char arrays, strings STL
	char str[4] = { 'a', 'b', 'c', '\0' }; //C-style string
	//'47'

	std::string str_2 = "I am very forgetful :(";

	//Bools and logical operators (NOT, OR, AND, != [XOR], ==, << shifts)
	bool my_bool = true; // 1
	bool your_bool = false; // 0

	my_bool = ~my_bool; //NOT true = false
	my_bool = my_bool || true; //true OR false = true, false OR false, my_bool = true
	my_bool = my_bool && your_bool; //true AND false = false, true AND true = true, my_bool = false
	my_bool = my_bool != your_bool; //the same -> 0, different -> 1, my_bool = false
	my_bool = (my_bool == your_bool); // the same -> 1, different -> 0, my_bool = true

	int num = 8; //000...01000, is 4th bit set?
	bool is4thbitset = num & (1 << 3); //1 << 3 -> 000.... 1000
	num = 4;
	is4thbitset = num & (1 << 3);

	std::vector<int> meow;
	meow.push_back(3);
	meow.push_back(2);
	meow.push_back(1);
	//3, 2, 1
	int mystery = meow[0];
	bool check = (mystery == 3);

	//static

	//technology evangelist!!!
	//internet of things!!!! tell your oven to preheat 
	//windows 8 and windows 10: app-based thinking!
	//browsers would be ancient
	//app-based: MS Word -> text app. search plug-in
	//application vs. "app"

	//LIFE ADVICE OF THE DAY:
	//STOP LOOKING AT YOUR PHONE
	//PRO-FOCUSING, ONE ACTION AT A TIME

	//STATIC: 
	static int meowmeow = 2;
	//hey compiler, keep an instance of this!!!

	{
		int b = 1;
	}

	return 0;
}*/