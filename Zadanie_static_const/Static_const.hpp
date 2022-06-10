#pragma once
#include <string>

class LectureRoom {
	int size = 0;
	const int floor;
public:
	LectureRoom(int _size) : size(_size), floor(_size / 100) {} // dobra praktyka by parametry nazywac tak samo plus _
	//LectureRoom(int _size) {
	// this->size = _size;
	//}

	//LectureRoom(int _size) : size(_size); //A nawet tak byloby to zdefiniowane, ale korzystamy z const
	//int size = 15; 

	static const std::string patronage;
	int getSize() const;
};

