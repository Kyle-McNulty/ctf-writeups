/*
Please provide us a function with the following protype:
int testb(int)

 Which has the same functionality as the following assembly:

 .LFB0:
   pushl %ebp
   movl  %esp, %ebp
   movl  8(%ebp), %eax
   imull $-1162764655, %eax, %eax
   popl  %ebp
   ret
*/
int testb(int num){
 int mult = -1162764655;
 int sol = mult * num;
 return sol;
}

