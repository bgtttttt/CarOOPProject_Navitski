#include "CarCollection.h"

void CarCollection::add(Car car) {
	if (size == 0) {
		collection = new Car[1];
		collection[0] = car;
	}
	else {
		Car* temp = new Car[size + 1];
		for (int i = 0; i < size; i++) {
			temp[i] = collection[i];
		}
		temp[size] = car;
		delete[] collection;
		collection = temp;
	}
	size++;
}
void CarCollection::remove(int index) {
	if (size > 0 && index >= 0 && index < size) {
		Car* temp = new Car[size - 1];
		for (int i = 0, j = 0; i < size; i++) {
			if (i != index) {
				temp[j++] = collection[i];
			}
		}
		delete[] collection;
		collection = temp;
	}
}
void CarCollection::remove(Car car) {
	int index = getFirstIndex(car);

	if (index != -1) {
		Car* temp = new Car[size - 1];
		for (int i = 0, j = 0; i < size; i++) {
			if (i != index) {
				temp[j++] = collection[i];
			}
		}
		size--;
		delete[] collection;
		collection = temp;
	}

}

int CarCollection::getFirstIndex(Car car) {
	for (int i = 0; i < size; i++) {
		if (car.getBrand() == collection[i].getBrand()
			&&car.getModel() == collection[i].getModel()
			&& car.getAge() == collection[i].getAge()
			&& car.getPrice() == collection[i].getPrice()) {
			return i;
		}
	}
	return -1;
}
int CarCollection::getLastIndex(Car car) {
	for (int i = size - 1; i >= 0; i++) {
		if (car.getBrand() == collection[i].getBrand()
			&& car.getModel() == collection[i].getModel()
			&& car.getAge() == collection[i].getAge()
			&& car.getPrice() == collection[i].getPrice()) {
			return i;
		}
	}
	return -1;
}

int CarCollection::getSize() {
	return size;
}

Car CarCollection::get(int index) {
	if (index >= 0 && index < size) {
		return collection[index];
	}
	return Car();
}

string CarCollection::convertToString() {
	string s = "Collection:\n";
	for (int i = 0; i < size; i++) {
		s += collection[i].getInfo() + "\n";
	}
	return s;
}