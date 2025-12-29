#include<iostream>
#include<curlpp/cURLpp.hpp>
#include<curlpp/Options.hpp>

int main() {
	curlpp::Cleanup myCleanup

	std::ostringstream os;
	os << curlpp::options::Url(std::string("http://modernhackers.com"));

	string mystring = os.str();

	return 0;
}
