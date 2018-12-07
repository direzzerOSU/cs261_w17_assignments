/* CS261- Assignment 1 - Q.1*/
/* Name:
 * Date:
 * Solution description:
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct student{
  int id;
  int score;
};

struct student* allocate() {
  /* Allocate memory for ten students */
     
  /* return the pointer */
}


void generate(struct student* students) {
  /*
   * Generate random ID and scores for 10 students, ID being between
   * 0 and 9, scores equal to (id * 10) % 50.
   */
}

void output(struct student* students) {
  /*
   * Output information about the ten students in the format:
   *
   *   ID0 Score0
   *   ID1 score1
   *   ID2 score2
   *   ...
   *   ID9 score9
   */
}

int min(struct student* students) {
  /* return the minimum score */
}

float avg(struct student* students) {
  /* return the average score */  
}

void sort(struct student* students){ 
  /* return the average score */  
}

void deallocate(struct student* stud) {
  /* Deallocate memory from stud */
}

int main(){
  struct student* stud = allocate();
  generate(stud);
  output(stud);
  sort(stud);
  for (int i=0; i<10; i++) {
    printf("%d %d\n", stud[i].id, stud[i].score);
  }
  printf("Avg: %f \n", avg(stud));
  printf("Min: %d \n", min(stud));
  return 0;
}
