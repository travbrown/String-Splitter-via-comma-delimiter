#include "stdafx.h"
#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

int main() {
	string Song[5], line = "Allissa Clark,Bruno Mars,24K Magic,3.5,Pop";
	int iter, firstcomma_pos; int full_len_step;
	
	//String Splitter using comma delimitation
	for (iter = 0;iter < 5;iter++) {
		if (iter == 4) {//if statement for when comma finished, use .length() to catch the genre
			
			Song[4] = line.substr(0, line.length());//for the last item, there is no preceding comma to use as a marker
			cout << Song[iter] << endl;
			break;
		}
		
		firstcomma_pos = line.find(',');// continuously update comma pos to cut out string
		Song[iter] = line.substr(0, firstcomma_pos);//string extracter using comma delimiter
		cout << Song[iter] << endl; //The Extract
		
		full_len_step = line.length() - (firstcomma_pos + 1); //length tracked to continuously update parent string
		line = line.substr((firstcomma_pos + 1), full_len_step);//constantly updating parent string
	}
	cout << endl << endl;
	for (iter = 0;iter < 5;iter++) {
		cout << Song[iter] << endl;
	}
	
	return 0;
}