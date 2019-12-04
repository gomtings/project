#include<iostream>
#include "Box.h"
using namespace std;

 Box::Box(int w, int h) {
	 setsize(w, h);
	 fill = '*';
}
 void Box::setfill(char f) {
	 fill = f;
 }
 void Box::setsize(int w, int h) {
	 width = w;
	 height = h;
 }
 void Box::draw() {
	 for (int i = 0; i < height; i++) {
		 for (int j = 0; j < width; j++) {
			 cout << fill;
		 }
		 cout << endl;
	 }
 }