/*
 *    A Pigeon's device is a way to jump into the body of an if - else
 *    by tangling the conditional with a switch statement.
 *
 *    Below, I have implemented a rather useless example in an attempt
 *    to demonstrate the control flow of a Pigeon's device.
 */

enum Evenness {
    UNKNOWN = 0;
    IS_ODD  = 1,
    IS_EVEN = 2,
};

// This is a function that takes an integer and returns the next largest even 
// integer. The first argument `n` is the number to add to, and the second 
// argument `mode` is the evenness.
// Again -- not a smart function, but it's what I could come up with :P
int pigeons_next_even(int n, int mode) {
    int ret = n;
    switch (mode)
    {
        case UNKNOWN : if (ret % 2) {
        case IS_ODD  :     ret += 1;
                           break;
                       } else {
        case IS_EVEN :     ret += 2;
                           break;
                       }
    }
    return ret;
}
