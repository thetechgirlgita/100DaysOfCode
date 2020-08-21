
#include <stdio.h> 
#include <time.h> 
  
int main()  { 
    time_t s, val = 1; 
    struct tm* current_time; 
  
    s = time(NULL); 
  
    current_time = localtime(&s); 
  
    printf("%02d:%02d:%02d", 
           current_time->tm_hour, 
           current_time->tm_min, 
           current_time->tm_sec); 
  
    return 0; 
} 