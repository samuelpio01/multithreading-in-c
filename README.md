# Multithreading in C
(can be used in C++ too but instead of using 'gcc' for compiling, use 'g++')


__Using multiple thread to complete a certain task to improve code efficiency.__

*This program is compiled and executed on CentOS system*

****************************************************************************************************************************

#### Question

Write a program to find points (x,y) in an array such that between no two points there exists another value 'z' in the array which falls between 'x' and 'y'.

ie: the point z should not be between x and y.

--->  x < z > y  -- if x < y

--->  x > z < y  -- if x > y    

  Print the value of the points (x,y) which have no values between them and the distance between them.
  
  Example:
  
  Input : 
  
         int arr[7] = {0,3,5,7,10,1,2};
  
  Output: 
          
          (0,1) or (1,0) = 1
  
          (3,5) or (5,3) = 2
          
          (3,2) or (2,3) = 1
          
          (5,7) or (7,5) = 2
          
          (7,10) or (10,7) = 3
          
          (1,2) or (2,1) = 1
 
***************************************************************************************************************************
 
 
 ## 1. Using Single Thread
 
  FileName: singlethread_execution.c
  
  To compile the singlethread_execution.c file
  
   Compile:
            GCC compiler: gcc singlethread_execution.c -o singlethread_execution
            
   --> An executable file pthread_multithreading will be created.
      
   To execute the singlethread_execution file
   
   Execute: ./singlethread_execution
     
     
 ## 2. Using POSIX Thread Library (pthread)
 
   FileName: pthread_multithreading.c
   
   To compile the pthread_multithreading.c file
   
   Compile:
            GCC compiler: gcc pthread_multithreading.c -o pthread_multithreading -lpthread 
            
   --> An executable file pthread_multithreading will be created.
      
   To execute the pthread_multithreading file
   
   Execute: ./pthread_multithreading
    
    For the syntax of pthread_create() or pthread_join() refer Linux Programmers Manual
   
   
  ## 3. Using OpenMP
  
   OpenMP (Open Multi-Processing) is an application programming interface (API) that supports multi-platform shared memory multiprocessing programming in C, C++, and Fortran, on most platforms, instruction set architectures (ISA) and operating systems, including Solaris, AIX, HP-UX, Linux, macOS, and Windows. It consists of a set of compiler directives, library routines, and environment variables that influence run-time behavior.
      
   Filename: openmp_multithreading.c
   
   In your code, do not forget to #include<openmp.h> library
   
   To Compile and Execute use the same commands as of Single Threads.
   
   
****************************************************************************************************************************
   ## Whats the difference?
   
   There is a big difference when it comes to Performance which is counted in terms of Latency and Throughput.
    
   Latency (Execution time): Time taken to finish execution of a certain task or CPU intensive calculations the time taken to complete the task will be higher.
    
   Throughput : Number of tasks executed in a fixed time.
    
  To check execution time of the process use 'time' before the Execution command
  
  eg: time ./pthread_multithreading
  
  
  ## What is the need?
   In the programs above it may not take much time with the given size of array. But try to increase the size of the array to 300 or 500 and then you will notice a significant difference in execution time.
  
  This can also be tried on Multiplication of nxn matrices or any code that take lots of CPU time for calculations. It will definitely improve the performance.
  
  ## To check number of CPU's and CPU threads and other CPU info
   Use the command 
   
    lscpu
    
   ![Alt text](https://github.com/samuelpio01/multithreading-in-c/blob/master/lscpu.png "lscpu command")
  
  Number of Cores in your system (Shown by CPUS) = No of Sockets x No Cores per socket x No of Threads per Core
  
  ## To check utilization of CPU threads
   Use the command *htop* in terminal.
   
   If htop is not installed on your Linux system then follow the instructions below
   
   __Installation of 'htop'__
   
   For RHEL, CentOS & Fedora Systems:
   
    sudo yum install htop
    
   For Debian Systems:
   
    sudo apt-get install htop
    
   Once htop is installed on your system you can simply run it with the command:
    
    htop
   
   You will see something like this
   ![Alt text](https://github.com/samuelpio01/multithreading-in-c/blob/master/htop.png "htop command")
   
   Since on my machine(CPU) has 8 cores we can see numbers between 1 to 8 which reqpresent the CPU core and along with it is the Utilization of CPU (in %).
   
   ****************************************************************************************************************************
   
   
   
