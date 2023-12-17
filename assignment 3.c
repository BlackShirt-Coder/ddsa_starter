#include "stdio.h"

int calculateTotalMark(int arr[6]);

int printingMarks(int arr[6]);

void checkPassOrFail(int arr[6]);

void checkDestination(int arr[6]);

void getHighestScore(int mgmg,int susu,int nunu);

int main() {
    int student[3];
    int mgmg[6];
    int susu[6];
    int nunu[6];
    for (int i = 0; i < 3; i++) {
        printf("enter mark for student: %d \n", i);
        if (i == 0) {
            for (int i = 0; i < 6; i++) {
                printf("enter marks: ");
                scanf("%d", &mgmg[i]);
            }
        } else if (i == 1) {
            for (int i = 0; i < 6; i++) {
                printf("enter marks: ");
                scanf("%d", &susu[i]);
            }
        } else if (i == 2) {
            for (int i = 0; i < 6; i++) {
                printf("enter marks: ");
                scanf("%d", &nunu[i]);
            }
        }

    }

    printf("\n marks for 'mgmg' is: ");
    printingMarks(mgmg);
    checkPassOrFail(mgmg);
    checkDestination(mgmg);
    int mgmgt = calculateTotalMark(mgmg);
    printf("\n mgmg total mark is: %d", mgmgt);


    printf("\n marks for 'susu' is: ");
    printingMarks(susu);
    checkPassOrFail(susu);
    checkDestination(susu);
    int susut = calculateTotalMark(susu);
    printf("\n susu total mark is: %d", susut);


    printf("\n marks for 'nunu' is: ");
    printingMarks(nunu);
    checkPassOrFail(nunu);
    checkDestination(nunu);
    int nunut = calculateTotalMark(nunu);
    printf("\n nunu total mark is: %d", nunut);
    getHighestScore(mgmgt,susut,nunut);
    return 0;
}

void getHighestScore(int mgmg,int susu,int nunu){
  if(mgmg>susu & mgmg>nunu){
      printf("\n mgmg got highest mark");
  }
  if(susu>mgmg & susu>nunu){
      printf("\n susu got highest mark");
  }
  if(nunu>mgmg & nunu>susu){
      printf("\n nunu got highest mark");
  }

}
int calculateTotalMark(int arr[6]) {
    int total = 0;
    for (int i = 0; i < 6; i++) {
        total += arr[i];
    }
    return total;
}

int printingMarks(int arr[6]) {
    for (int i = 0; i < 6; i++) {
        printf("%d ,", arr[i]);
    }
}

void checkDestination(int arr[6]) {
    int count = 0;
    for (int i = 0; i < 6; i++) {
        if (arr[i] >= 80) {
            ++count;
        }
    }
    if (count > 0) {
        printf("\n student got %d destinations", count);
    } else {
        printf("\n student have no destinations");
    }
}

void checkPassOrFail(int arr[6]) {
    int count=0;
    int fail = 0;
    for (int i = 0; i < 6; i++) {
        if (arr[i] < 40) {
            ++count;
            fail = 1;
        }
    }
    if (fail == 1) {

        printf("student fail the exam");
        printf("\n student fail %d subject",count);
    } else {
        printf("student pass the exam");
    }
}
