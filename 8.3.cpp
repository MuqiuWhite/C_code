#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NAME_LENGTH 11
#define QUESTION_COUNT 13
#define STUDENT_COUNT 10000
typedef struct {
    char name[NAME_LENGTH];
    int accepted;
    int time;
} Student;
Student students[STUDENT_COUNT];
int MyCompare(const void *q,const void *w);
void PrintStudentRank(Student students[], int length);
int main() {
    int questionCount, penalty;
    scanf("%d %d", &questionCount, &penalty);
    getchar(); // 读出回车符
    int studentIdx = 0;
    // 读取每个学生的信息
    while(scanf("%s", students[studentIdx].name) != EOF) {
        students[studentIdx].accepted = 0;
        students[studentIdx].time = 0;
        // 统计该学生这 questionCount 道题的解答情况
        for(int i = 0; i < questionCount; i++) {
            int timeCost;
            scanf("%d", &timeCost);
            if(timeCost > 0) {
                students[studentIdx].accepted++;
                students[studentIdx].time += timeCost;
                if(getchar() == '(') { // 有括号的情况，加上惩罚时间
                    int faultTimes;
                    scanf("%d", &faultTimes);
                    students[studentIdx].time += penalty * faultTimes;
                    getchar(); // 读出右括号
                }
            }
        }
        // 排序后输出
        qsort(students, studentIdx + 1, sizeof(Student), MyCompare);
        PrintStudentRank(students, studentIdx + 1);
        studentIdx++;
        getchar(); // 读出回车符
    }
    return 0;
}
int MyCompare(const void *q,const void *w) {
    Student *s1=(Student*)q,*s2=(Student*)w;
    if(s1->accepted != s2->accepted)
        return s2->accepted - s1->accepted;
    if(s1->time != s2->time)
        return s1->time - s2->time;
    return strcmp(s1->name, s2->name);
}
void PrintStudentRank(Student students[], int length) {
    for(int i = 0; i < length; i++)
        printf("%-10s %2d %4d\n", students[i].name,
               students[i].accepted, students[i].time);
}
