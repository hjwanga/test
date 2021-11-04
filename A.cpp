#include "A.h"

static void Foo(void) {

}

int main() {
    bool flag = true;
    int choice = 2;
    switch(choice) {
        case 1:
            Foo();
            break;
        case 2:
            Foo();
            Foo();
            break;
        default:
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
            break;
    }

    return 0;
}

static void Foo1(void) {

}

static void Foo2(void) {

}
