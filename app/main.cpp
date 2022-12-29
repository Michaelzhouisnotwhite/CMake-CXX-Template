#include <TestLib/test_lib.h>
#include <iostream>
#include <string>
int main(int args, char *argv[]) {
    using std::cout;
    using std::endl;
    std::string output = "hello world";
    cout << output << endl;

    cout << "1 + 2 = " << add(1, 2) << endl;
    cout << mysqrt(2) << endl;
    return 0;
}
