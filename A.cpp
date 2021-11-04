#include "A.h"

static void Foo(void) {

}

int main() {
    bool flag = true;
    if(flag) {
        // Do something
        Foo();
        Foo();
        Foo();
        Foo();
        Foo();
        Foo();
        Foo();
        Foo();
        Foo();
        Foo();
    }
    else {
        // Do other things
    }

    return 0;
}