#include "iostream"

using std::cout;
using std::endl;

#define tag __FILE__ << ":" << __LINE__ << " "

int main(int argc, char *argv[]) {
    int result = 0;
    cout << tag << argv[0] << " main entry" << endl;

    cout << tag << "hello there" << endl;
    
    cout << tag << argv[0] << " main exit " << result << endl;
    return result;
}

