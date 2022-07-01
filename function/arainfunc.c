#include <stdio.h>

/* ফাংশনের ভেতরে অ্যারে পাস করলে ওই অ্যারের আলাদা কোনো কপি তৈরি হয় না। কারণ হচ্ছে আমরা ফাংশনের ভেতর অ্যারের নামটি কেবল পাঠাই, যেটি কিনা ওই অ্যারেটি মেমোরির কোন জায়গায় আছে তার অ্যাড্রেস। (http://cpbook.subeen.com/2011/09/function-programming-book.html : প্রোগ্রাম: ৭.৮ )*/

void test_func(int ara[])
{
    ara[0] = 99;
    return;
}
int main()
{
    int ara[] = {1, 4, 5, 7};
    printf("%d\n", ara[0]);
    test_func(ara);
    printf("%d\n", ara[0]); // this will return 99. Because when we are working with ara in functions the value doesn't get passed the address for the variables get passed.
    return 0;
}
