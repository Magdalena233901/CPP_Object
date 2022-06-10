#pragma once

class BaseClass {
	int x = 1;
	int hidden = 6;
protected:
	int hiddenForOutside = 14;
public:
	int z = 0; // nie wystawiamy pol publicznie - tylko do celow szkoleniowych!
	int getX();
};

class DerivedClass : public BaseClass {
	int y = 2;
	int x = 12;
public:
	int getY();
	int getDerivedX();
	int& getHiddenForOutside();
};

class DerivedClassProtected : protected BaseClass {
	int foo() {
		int s = hiddenForOutside + z;
	}
};

class DerivedClassPrivate : private BaseClass {
public:
	int foo() {
		int s = hiddenForOutside;
	}
};

class NextLevelInheritance : DerivedClassPrivate {}; // nie zadziala, jesli dodamy final za DerivedClassPrivate


int bar() {
	DerivedClassProtected o;
	// o.getX() - nie ma dostepu - getX() stalo sie protected!

	DerivedClassPrivate o2;

	// o2.hiddenForOutside
	// o2.getX()
	return 0;
}