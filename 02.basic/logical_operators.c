#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool has_nid = false;
    bool has_passport = true;
    bool is_adult = true;
    // int has_id = has_nid || has_passport;

    // printf("Id - %d\n", has_id);

    bool is_permited = (has_nid || has_passport) && is_adult;

    printf("Permission - %d\n", is_permited);

    //{
    bool a = 60;
    bool b = 60;
    bool not_same = a != b;
    printf("%d\n", not_same);

    //}
    return 0;
}
/*
    Logical And
    -------------

    A       B       Result
    true    true    true
    false   false   false
    true    false   false
    false   true    false

    Logical Or
    -------------
    A       B       Result
    true    true    true
    true    false   true
    false   true    true
    false   false   false

    Logical Not
    ------------
    A       Result
    true    false
    false   true
*/
