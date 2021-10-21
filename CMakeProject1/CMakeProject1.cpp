// CMakeProject1.cpp: 定义应用程序的入口点。
//

#include "CMakeProject1.h"

#include <iostream>
#include <boost/type_index.hpp>

void sample2() {
	auto&& x = 42;

	std::cout << "x is "
		<< boost::typeindex::type_id_with_cvr<decltype(x)>()
		<< std::endl;
}

int main() {
	sample2();
	return 0;
}
