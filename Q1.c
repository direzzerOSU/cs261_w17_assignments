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
	struct student* s = malloc(10*sizeof(*s));
  /* return the pointer */
	return s;
}


void generate(struct student* students) {
  /*
   * Generate random ID and scores for 10 students, ID being between
   * 0 and 9, scores equal to (id * 10) % 50.
   */
	for (int k = 0; k < 10; k++)
	{
		students[k].id = k;
		students[k].score = (students[k].id * 10) % 50;
	}
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

	for (int k = 0; k < 10; k++)
	{
		printf("ID%u Score%u \n", students[k].id, students[k].score);
	}
}

int min(struct student* students) {
  /* return the minimum score */
	int m = 0;

	for (int k = 0; k < 10; k++)
	{
		if (students[k].score < m)
		{
			m = students[k].score;
		}
	}

	return m;
}

float avg(struct student* students) {
  /* return the average score */  

	float v = 0;

	for (int k = 0; k < 10; k++)
	{
		v += students[k].score;
	}

	return (float) v / 10;
}

void sort(struct student* students){ 
  /* return the average score */  
}

void deallocate(struct student* stud) {
  /* Deallocate memory from stud */

	free(stud);
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
