#include "HelperMethods.h"


void HelperMethods::DisplayUI() {
	std::cout << "test";
}
 HelperMethods* HelperMethods::MakeInstance() {
	if (instance == nullptr) {
		instance = new HelperMethods();
	}
	return instance;
}
HelperMethods* HelperMethods::instance = nullptr;
HelperMethods::HelperMethods() {

}
HelperMethods::~HelperMethods() {

}

