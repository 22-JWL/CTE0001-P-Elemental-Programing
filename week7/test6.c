#include <stdio.h>// 전처리기. 
    int main (void)
        {/*함수의 시작*/

            //변수의 선언과 정의
            int sum;
            int n;

            //1~i까지의 정수 합 구하기
            for (int i = 1; i <=10000; i++)
            {
             if(sum + i <=50000){//sum에서 i를 더했을 때도 50000을 넘지않는경우에만 더한다
                 sum += i;
                 n = i;//가장 마지막으로 더해준값으로 n 초기화
             }   
            }

            //결과값 출력
            printf("1~n까지의 정수 합중 50000을 넘지 않는 가장 큰 정수 합 : %d 그때의 n 값 : %d", sum, n);

            return 0;//함수를 종료시키면서 값을 반환하는 키워드이다.
        }//함수의 종료