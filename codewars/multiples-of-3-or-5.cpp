int solution(int number) 
{
  int sum = 0;
  for(int i = 3; i < number; i++) {
    if(!(i % 3 && i % 5))
       sum += i;
  }
  return sum;
}
