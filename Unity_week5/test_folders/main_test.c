#include <stdio.h>
#include <stdlib.h>
#include "header.h"
#include "unity.h"
void setUp(void) { }
void tearDown(void) { }

void test_caesarCipher(void){
TEST_ASSERT_EQUAL_STRING("okffng-Qwvb",caesarCipher("middle-Outz", 2));
TEST_ASSERT_EQUAL_STRING("dssoh",caesarCipher("apple", 3));
printf("===============test caesarcipher problem end=============");
}
void test_towerbreaker(void){

TEST_ASSERT_EQUAL_INT(2,towerBreakers(2,2));
TEST_ASSERT_EQUAL_INT(1,towerBreakers(1,4));
printf("===============test towerbreaker problem end=============");

}

void test_drawingbook(void){

TEST_ASSERT_EQUAL_INT(1,pageCount(6,2));
TEST_ASSERT_EQUAL_INT(0,pageCount(5,4));
printf("===============test drawing book end=============");

}

void test_diagonal(void){
    int a[3][3]={{11,2,4},{4,5,6},{10,8,-12}};
int b[3][3]={{3,3,3},{3,3,3},{3,3,3}};
TEST_ASSERT_EQUAL_INT(0,diagonalDifference(3,3,a));
TEST_ASSERT_EQUAL_INT(15,diagonalDifference(3,3,a));
printf("===============test diagonal difference end=============");

}

void test_lonelyinteger(void)
{
    int a[7]={1,2,3,4,3,2,1};
    int b[5]={1,3,3,2,1};

    TEST_ASSERT_EQUAL_INT(4,lonelyinteger(7,a));
    TEST_ASSERT_EQUAL_INT(2,lonelyinteger(5,b));
    printf("===============test lonelyinteger end=============");


}
void test_pangram(){
    TEST_ASSERT_EQUAL_STRING("pangram",pangrams("We promptly judged antique ivory buckles for the next prize"));
    TEST_ASSERT_EQUAL_STRING("not pangram",pangrams("We promptly judged antique ivory buckles for the prize"));


    printf("===============test pangram end=============");



}
void test_avg(){
    int arr[]={1,2,3,4,5};
    TEST_ASSERT_FLOAT_WITHIN(0.0,3.0,arr_average(arr,5));
    TEST_ASSERT_FLOAT_WITHIN(0.21,2.8,arr_average(arr,5));
    TEST_ASSERT_FLOAT_WITHIN(0.5,2.5,arr_average(arr,5));
    printf("===============test average of array end=============");



}
void test_swap(){
    int a=10,b=20;
    num_swap(&a,&b);
    TEST_ASSERT_EQUAL_INT(10,b);
    TEST_ASSERT_EQUAL_INT(20,a);
    printf("===============test swapping of numbers end end=============");
}
void test_arr_swap(){
  int arr[]={1,2,3,4,5};
  int size =5;
  arr_swap(arr,size);
  int expected[]={5,4,3,2,1};
  TEST_ASSERT_EQUAL_INT_ARRAY(expected,arr,size);

   printf("===============test array reverse end=============");

}

void test_even(void){
TEST_ASSERT_EQUAL_INT(1,even(10));
TEST_ASSERT_EQUAL_INT(1,even(8));
TEST_ASSERT_TRUE(even(2));
 printf("===============test even end=============");

}
void test_noteven(void){
TEST_ASSERT_EQUAL_INT(0,even(5));
TEST_ASSERT_EQUAL_INT(0,even(1));
TEST_ASSERT_FALSE(even(1));
 printf("===============test not even end=============");

}

void test_add(void) {
    TEST_ASSERT_EQUAL_INT(6, add(2,4));
    TEST_ASSERT_EQUAL_INT(0, add(-2,2));
    printf("===============test addition end=============");

}
void test_leapyear(void){
TEST_ASSERT_EQUAL_INT(1,leapyear(2000));
 printf("===============test LEAPYEAR end=============");
}


void test_sub(void) {
    TEST_ASSERT_EQUAL_INT(2, sub(4,2));
    TEST_ASSERT_EQUAL_INT(-4, sub(-2,2));
    printf("===============test subtraction end=============");
}
void test_mul(void) {
    TEST_ASSERT_EQUAL_INT(6, mul(2, 3));
    TEST_ASSERT_EQUAL_INT(0, mul(0, 5));
    TEST_ASSERT_EQUAL_INT(-15, mul(3, -5));
    printf("===============test multiplication end=============");
}
void test_divide(void) {
    TEST_ASSERT_EQUAL_INT(2, divide(6, 3));
    TEST_ASSERT_EQUAL_INT(0, divide(0, 5));
    TEST_ASSERT_EQUAL_INT(-3, divide(9, -3));
    TEST_ASSERT_EQUAL_INT(0, divide(5, 0));
    printf("===============test divide end=============");
}


void test_mod(void) {
    TEST_ASSERT_EQUAL_INT(1, mod(7, 3));
    TEST_ASSERT_EQUAL_INT(0, mod(10, 5));
    TEST_ASSERT_EQUAL_INT(-1, mod(-7, 3));
    printf("===============test mod end=============");
}

void test_square(void) {
    TEST_ASSERT_EQUAL_INT(9, square(3));
    TEST_ASSERT_EQUAL_INT(0, square(0));
    TEST_ASSERT_EQUAL_INT(16, square(-4));
    printf("===============test square end=============");
}
int main()
{
      UNITY_BEGIN();
    RUN_TEST(test_add);
    RUN_TEST(test_sub);
    RUN_TEST(test_mul);
    RUN_TEST(test_mod);
    RUN_TEST(test_square);
     RUN_TEST(test_divide);
     RUN_TEST(test_leapyear);
     RUN_TEST(test_even);
     RUN_TEST(test_noteven);
     RUN_TEST(test_avg);
     RUN_TEST(test_swap);
     RUN_TEST(test_arr_swap);
     RUN_TEST(test_lonelyinteger);
     RUN_TEST(test_diagonal);
     RUN_TEST(test_drawingbook);    
     RUN_TEST(test_towerbreaker);

    return UNITY_END();

}
