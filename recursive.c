/*

import time

def add_chars(pw, stop_at, test_chars):
    if len(pw) + 1 == stop_at:
        more = False
    else:
        more = True
    for c in test_chars:
        out = pw + c
        if more:
            for recursive_out in add_chars(out, stop_at, test_chars):
                yield recursive_out
        else:
            yield out

def main():
    test_chars = "abcdefghijklmnopqrstuvwxyz"
    targ_pw = 'dummyy'
    max_len = 12
    stop_at = 1
    not_found = True
    while (stop_at <= max_len) & not_found:
        for pw in add_chars('', stop_at, test_chars):
            if pw == targ_pw:
                print(pw)
                not_found = False
                break
        stop_at += 1

if __name__ == '__main__':
    main()

*/

#include <stdio.h>


// might be helpful? https://stackoverflow.com/questions/1637775/generators-in-c

int main(int argc, char *argv[]){
  char * pw;
  pw = "testpw";
  printf("%s\n", pw);

  return(0);
}
