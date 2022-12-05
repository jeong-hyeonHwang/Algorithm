using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = 0;
    long long cost = 0;
    for(int i=0; i< count; i++) {
        cost += price * (i + 1);
    }
    if (money >= cost) {
        answer = 0;
    } else {
        answer = cost - money;
    }
    
    return answer;
}