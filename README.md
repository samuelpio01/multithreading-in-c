## Multithreading in C 
(can be used in C++ too but instead of using 'gcc' for compiling, use 'g++')


#Using multiple thread to complete a certain task to improve code efficiency.

############################################################################################################################
****************************************************************************************************************************

Qn: Write a program to find points (x,y) in an array such that between no two points there exists another value 'z' in the array which falls between 'x' and 'y' (ie: the point z should not be between x and y --->  x<z>y  -- if x<y
                                                                                     --->  x>z<y  -- if x>y    ).
  Print the value of the points (x,y) which have no values between them and the distance between them.
  
  eg: 
  input : int arr[7] = {0,3,5,7,10,1,2};
  
  output: (0,1) or (1,0) = 1
          (3,5) or (5,3) = 2
          (3,2) or (2,3) = 1
          (5,7) or (7,5) = 2
          (7,10) or (10,7) = 3
          (1,2) or (2,1) = 1
          
          ***************************************************************************************************************************
 
 
 #1. Using Single Thread
 
  FileName: singlethread_execution.c
  To compile the pthread_multithreading.c file
    Compile:
            GCC compiler: gcc pthread_multithreading.c -o pthread_multithreading
            --> An executable file pthread_multithreading will be created.
      
   To execute the pthread_multithreading file
     Execute: ./pthread_multithreading
     
     
 #2. Using POSIX Thread Library (pthread)
 
    FileName: pthread_multithreading.c
   To compile the pthread_multithreading.c file
    Compile:
            GCC compiler: gcc pthread_multithreading.c -o pthread_multithreading -lpthread 
      --> An executable file pthread_multithreading will be created.
      
   To execute the pthread_multithreading file
    Execute: ./pthread_multithreading
    
    For the syntax of pthread_create() or pthread_join() refer Linux Programmers Manual
   
   
  #3. Using OpenMP
  
      OpenMP (Open Multi-Processing) is an application programming interface (API) that supports multi-platform shared memory multiprocessing programming in C, C++, and Fortran, on most platforms, instruction set architectures (ISA) and operating systems, including Solaris, AIX, HP-UX, Linux, macOS, and Windows. It consists of a set of compiler directives, library routines, and environment variables that influence run-time behavior.
      
   Filename: openmp_multithreading.c
   
   In your code, do not forget to #include<openmp.h> library
   
   To Compile and Execute use the same commands as of Single Threads.
   
   
   ****************************************************************************************************************************
   #Whats the difference?
   
   There is a big difference when it comes to Performance which is counted in terms of Latency and Throughput.
    
    Latency (Execution time): Time taken to finish execution of a certain task
        > For CPU intensive calculations the time taken to complete the task will be higher.
    
    Throughput : Number of tasks executed in a fixed time.
    
  To check execution time of the process use 'time' before the Execution command
  eg: time ./pthread_multithreading
  
  
  Why do we need to do this?
  -> In the programs above it may not take much time with the given size of array. But try to increase the size of the array to 300 or 500 and then you will notice a significant difference in execution time.
  
  This can also be tried on Multiplication of nxn matrices or any code that take lots of CPU time for calculations. It will definitely improve the performance.
   
   
****************************************************************************************************************************############################################################################################################################
   
   
   
