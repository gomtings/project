#include<iostream>
class TV {
	TV() {
		channels = 256;
	}
public :
	int channels;
	TV(int a) {
		channels = a;
	}
};/*
int main() {
	TV LG;
	LG.channels;
	TV Samsung(100);
	return 0;
}*/