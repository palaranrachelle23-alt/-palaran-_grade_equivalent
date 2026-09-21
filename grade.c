# -palaran-_grade_equivalent
  #include <stdio.h>

    int main () {
    int score;

    //input: numeric score
    printf ("Enter your score: ");
    scanf ("%d", &score);

    //determining the equivalent letter grade
    //displaying the corresponding letter grade
    if (score >= 90) {
        printf ("Grade: A\n");
    }
    else if (score >=80) {
        printf ("Grade: B\n");
    }
    else if (score >=70) {
        printf ("Grade: C\n");
    }
    else if (score >=60) {
        printf ("Grade: D\n");
    }
    else {
        printf ("Grade: F\n");
    }
    return 0;
    }
