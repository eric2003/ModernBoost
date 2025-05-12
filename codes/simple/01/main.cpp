#include <boost/filesystem.hpp>
#include <iostream>

int main() {
    boost::filesystem::path p("test.txt");
    std::cout << "Path: " << p << std::endl;
    return 0;
}