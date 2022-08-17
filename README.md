When fork() is called,a child process is created.The parent process and the child process runs parallely.For the child process the return value of fork() is 0.so,if loop will execute and it prints "I am child" .For the parent process the return value of fork() is greater than 0.So,else loop will execute and it prints "I am parent".

As both the processes are running simultaneously,any process can give output in any order i.e;
possible outputs are:

I am parent
I am child
(or)
I am child
I am parent
