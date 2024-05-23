#include "lr.h"

#define A 3
#define B 11
#define C 8

#define YES 1
#define NO 0

#define R 10

#define N 3
#define K 4

void insertionSortFunction(int array[][K], int rows, int cols) {
for (int i = 1; i < rows * cols; i++) {
    int key = array[i / cols][i % cols];
    int j = i - 1;


    while (j >= 0 && array[j / cols][j % cols] > key) {
      array[(j + 1) / cols][(j + 1) % cols] = array[j / cols][j % cols];
      j--;
    }
    array[(j + 1) / cols][(j + 1) % cols] = key;
  }
}



int lab1() {
     int x, P;
     printf ("Put in x: ");
     scanf ("%d", &x);
     P = x*x*x*x-3*x*x+11*x-8;
     printf("P = %d", P);
     return 0;
}
int labd1() {
     int x, P;
     printf ("Put in x: ");
     scanf ("%d", &x);
     P = x*x*x*x-A*x*x+B*x-C;
     printf("P = %d", P);
     return 0;
}
int lab2() {
     float eps, a, b, element, sum;
     int sign;

     printf ("eps = ");
     scanf ("%f", &eps);

     sum = 0;
     sign = 1;
     a = 1;
     b = 1;
     element = a/b;

 while (element > eps) {
     sum += element * sign;
     sign = -sign;
     a += 1;
     b *= 2;
     element = a/b;
     }

     printf ("Sum = %f", sum);

     return 0;
}
int labd2() {
     float eps, a, b, element, sum;
     //int sign, N;

     printf ("eps = ");
     scanf ("%f", &eps);
     printf ("N = ");
    // scanf ("%d", &N);

     sum = 0;
    // sign = 1;
     a = 1;
     b = 1;
     element = a/b;

     for (int i=0; i<N; i++) {
     if (element > eps) {
     break;
     }
     a += 1;
     b *= 2;
     element = a/b;
     sum += element;
     }

 printf ("Sum = %f", sum);

 return 0;
}
int lab3() {
     int a, flag, chet, found;
     chet = 0;
     flag = NO;
     found = NO;
     while ((a = getchar()) != EOF) {
     if (a == ' ' || a == '.' || a == '\n' || a == ',') {
     if (flag == YES) {
     if (found == YES) {
     chet++;
     }
     }
     flag = NO;
     }
     else {
     if (a == 'e' || a == 'u' || a == 'i' || a == 'o' || a == 'a' || a == 'y') {
     found = YES;
     }
     else {
     found = NO;
     }
     flag = YES;
     }
     }
     printf ("%d words", chet);

     return 0;
}
int lab4() {

    char str[100];
    int q = 0;
    int c=0;
    fgets(str, sizeof(str),stdin);

    char result[100];
    int j = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        c+=1;
        if (str[i] == ' ') {
            result[j++] = ' ';
        }
        else {
            int start = i;
            while (str[i] != ' ' && str[i] != '\0') {
                i++;
            }
            i--;

            char word[100];
            int k = 0;
            for (int m = start; m <= i; m++) {
                word[k++] = str[m];
            }
            word[k] = '\0';

            int kolgl = 0;
            int kolsogl = 0;

            int c = 0;
            while (word[c] != '\0') {
                if (word[c] == 'a' || word[c] == 'e' || word[c] == 'i' || word[c] == 'o' || word[c] == 'u') {
                    kolgl++;
                } else if ((word[c] >= 'a' && word[c] <= 'z')) {
                    kolsogl++;
                }
                c++;
            }


            if (kolgl > kolsogl) {
                for (int n = start; n <= i; n++) {
                    result[j++] = 0;
                }
            } else {
                for (int n = start; n <= i; n++) {
                    result[j++] = str[n];
                }
            }
        }
    }
    result[j] = '\0';

int size = sizeof(result) / sizeof(char);

for (int i = 0; i < size; i++)
        {
            if (result[i] == 0 && result[i+1] == 0)
            {
                for (int j = i; j < size - 1; j++)
                {
                    if (result[j] == 0 && result[j+1] == 0)
                    {
                        result[j] = '\0';
                    }

                }
            }
        }
        for (int i = 0; i < c; i++) {
            printf("%c", result[i]);
        }

    return 0;
}

int labd4() {
     char str[100];
    int q = 0;
    int c=0;
    fgets(str, sizeof(str),stdin);

    char result[100];
    int j = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        c+=1;
        if (str[i] == ' ') {
            result[j++] = ' ';
        }
        else {
            int start = i;
            while (str[i] != ' ' && str[i] != '\0') {
                i++;
            }
            i--;

            char word[100];
            int k = 0;
            for (int m = start; m <= i; m++) {
                word[k++] = str[m];
            }
            word[k] = '\0';

            int kolgl = 0;
            int kolsogl = 0;

            int c = 0;
            while (word[c] != '\0') {
                if (word[c] == 'a' || word[c] == 'e' || word[c] == 'i' || word[c] == 'o' || word[c] == 'u') {
                    kolgl++;
                } else if ((word[c] >= 'a' && word[c] <= 'z')) {
                    kolsogl++;
                }
                c++;
            }


            if (kolgl > kolsogl && (kolgl % 2 == 0)) {
                for (int n = start; n <= i; n++) {
                    result[j++] = 0;
                }
            } else {
                for (int n = start; n <= i; n++) {
                    result[j++] = str[n];
                }
            }
        }
    }
    result[j] = '\0';

int size = sizeof(result) / sizeof(char);

for (int i = 0; i < size; i++)
        {
            if (result[i] == 0 && result[i+1] == 0)
            {
                for (int j = i; j < size - 1; j++)
                {
                    if (result[j] == 0 && result[j+1] == 0)
                    {
                        result[j] = '\0';
                    }

                }
            }
        }
        for (int i = 0; i < c; i++) {
            printf("%c", result[i]);
        }

    return 0;
}


int lab5() {
    int arr[10];
    int i;
    int kol_chet, kol_nechet;

    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 10; i++) {
        if (arr[i] % 2 == 0) {
            kol_chet++;
        }
        else {
            kol_nechet++;
        }
    }

    if (kol_nechet < kol_chet) {
        for (i = 0; i < 10; i++) {
            if (arr[i] % 2 != 0) {
                arr[i] = 0;
            }
        }
    }
    else {
         for (i = 0; i < 10; i++) {
            if (arr[i] % 2 == 0) {
                arr[i] = 0;
            }
        }
    }
    for (i = 0; i < 10; i++) {
        printf("%d", arr[i]);
    }


    return 0;
}

int labd5() {
    int arr[R];
    int i;
    int kol_chet, kol_nechet;

    for (i = 0; i < R; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < R; i++) {
        if (arr[i] % 2 == 0) {
            kol_chet++;
        }
        else {
            kol_nechet++;
        }
    }

    if ((kol_nechet < kol_chet)) {
        for (i = 0; i < R; i++) {
            if (arr[i] % 2 != 0  && (arr[i] > 0)) {
                arr[i] = 0;
            }
        }
    }
    else if ((kol_nechet > kol_chet)) {
         for (i = 0; i < R; i++) {
            if (arr[i] % 2 == 0 && (arr[i] > 0)) {
                arr[i] = 0;
            }
        }
    }
    for (i = 0; i < R; i++) {
        printf("%d", arr[i]);
    }


    return 0;
}

int lab6() {
    int matrix[N][K];


for (int i = 0; i < N; i++) {
        for (int j = 0; j < K; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }



    int sum[N+K-1] = {0};


    for(int i=0; i<N; i++) {
        for(int j=0; j<K; j++) {
            sum[i-j+N-1] += matrix[i][j];
        }
    }


    int max_sum_index = 0;
    for(int i=1; i<N+K-1; i++) {
        if(sum[i] > sum[max_sum_index]) {
            max_sum_index = i;
        }
    }


    for(int i=0; i<N; i++) {
        for(int j=0; j<K; j++) {
            if(i-j+N-1 == max_sum_index) {
                matrix[i][j] = 0;
            }
        }
    }
printf("\n");

    for(int i=0; i<N; i++) {
        for(int j=0; j<K; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

int labd6() {


    int matrix[N][K];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < K; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\n");



    insertionSortFunction(matrix, N, K);


    for (int i = 0; i < N; i++) {
        for (int j = 0; j < K; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }



    int sum[N+K-1] = {0};


    for (int i = 0; i < N; i++) {
        for (int j = 0; j < K; j++) {
            sum[i-j+N-1] += matrix[i][j];
        }
    }


    int max_sum_index = 0;
    for (int i = 1; i < N+K-1; i++) {
        if (sum[i] > sum[max_sum_index]) {
            max_sum_index = i;
        }
    }


    for (int i = 0; i < N; i++) {
        for (int j = 0; j < K; j++) {
            if (i-j+N-1 == max_sum_index) {
                matrix[i][j] = 0;
            }
        }
    }
    printf("\n");

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < K; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

int lab7() {

  unsigned long long n;
  unsigned int k;

  scanf("%llu", &n);
  scanf("%u", &k);

  int bitCount = sizeof(n) * 8;
  k %= bitCount;
  if (k == 0) return n;
  unsigned long long res = (n >> k) | (n << (bitCount - k));


  printf("%llu\n", res);
  return 0;

}
