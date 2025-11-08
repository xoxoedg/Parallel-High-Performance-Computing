#include <stdio.h>


struct Point {
    int x;
    int y;
};

struct Student {
    int id;
    float grade;
};

void make_student() {
    struct Student s1;
    s1.id = 12;
    s1.grade = 1.7;

    printf("Student id %d, Studen grade %f",s1.id, s1.grade);
};

int main() {
    struct Point p1;
    p1.x = 5; 
    p1.x = 10;
    make_student();
    return 0;
    
}
