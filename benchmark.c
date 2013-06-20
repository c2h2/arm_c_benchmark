#include <stdio.h>
#include <sys/time.h>
#include <stdlib.h>

#define K10   1000*10
#define K100  1000*100
#define M1    1000*1000
#define M10   1000*1000*10
#define M100  1000*1000*100
#define M500  1000*1000*500
#define G1    1000*1000*1000

struct timeval t0, t1;

void welcome(){
  printf("This simple benchmark tests single core performance of CPU and RAM, created c2h2 v0.1.\n\n");

}

long int clk_start(){
  return gettimeofday(&t0, NULL);
}

long int clk_elasped(){
  gettimeofday(&t1, NULL);
  long int diff = ((t1.tv_usec + 1000000 * t1.tv_sec) - (t0.tv_usec + 1000000 * t0.tv_sec))/1000;
  return diff; 
}

void publish_result(char* name, long int ms){
  static int cnt=0;
  printf("BENCHMARK: %d| %s: %ld .\n",cnt++, name, ms);
}



float bench_memcpy(){
  int *a,*b,*c,*d;
  int i,size;
  long int te;
  float speed;
  
  size= 1024*256; //256KB 

  a=(int*)malloc(size);
  b=(int*)malloc(size);
  c=(int*)malloc(size);
  d=(int*)malloc(size);
  memset(c, 0xFF, size);
  memset(d, 0xAA, size);
  
  clk_start(); 
  for(i=0; i<K10; i++){
    memcpy(a, c, size);
    memcpy(b, d, size);
    memcpy(b, c, size);
    memcpy(a, d, size);
  }

  te=clk_elasped();
  speed = (float)i/(float)te*1000.0;
  publish_result("memcpy of 256KB data in MB/s   ", speed);


}

float bench_int(){
  int a,b,c,d,e,f,g,z;
  long int te;
  int i;
  float speed;

  a=0; b=10; c=123; d=2313; e=-123; f=233684; g=-1231235,z=123;

  clk_start();
  for(i=0; i<M100; i++){
    a=b+c+d+e+f+g;
    c=a*b-c*e-f*g;
    d=a/z+b/z+c/z+d/z+e/z+f/z+g/z;
    a=z+a+b+c+d+e-f-g;
  }

  te=clk_elasped();
  speed = (float)i/(float)te;
  publish_result("int calculation in   Kloops/sec", speed);

}

float bench_float(){
  float a,b,c,d,z, speed;
  long int te;
  int i;
  
  a=0.5;
  b=1.5;
  c=4.5;
  d=6.25;
  z=4.123;
  
  clk_start();
  for(i=0; i<M100; i++){
    a=a+b; b=a-c; c=a-b; d=d+d;
    a=d*a; b=a/c; c=b*a; d=c/a;
    d=a+b-c+d-z+z;
  }
  
  te=clk_elasped();
  speed = (float)i/(float)te;
  publish_result("float calculation in Kloops/sec", speed);
}


float bench_malloc(){
  long int te;
  int i;
  void* dummy;
  float speed;
  
  clk_start();
  for(i=0; i<M1; i++){
    dummy = (void*)malloc(1024*1024);
    free(dummy);
  }
  
  te=clk_elasped();
  speed = (float)i/(float)te;
  publish_result("malloc and free in Ktimes/sec  ", speed);
  
}

int main(){
  welcome();
  bench_malloc();
  bench_memcpy();
  bench_int();
  bench_float();  
  
  return 0;
}
