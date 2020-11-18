##### C Primer Plus Six edition

###### One
1.对编程而言，可移植性意味着什么？
  
  源码不该动或很少该动就可以在不同平台运行 
  
2．解释源代码文件、目标代码文件和可执行文件有什么区别？

   源码文件是文本文件，有程序员编写，人类可阅读并理解，是逻辑的代码实现；
   目标文件是源代码编译成的机器代码文件；
   可执行文件是由编译器连接器生成的包含程序入口的可直接在机器上执行文件
   
3．编程的7个主要步骤是什么？

   思考-计划-编码-调试-维护
   
4．编译器的任务是什么？

   将文本的源码编译为机器码
   
5．链接器的任务是什么

   将程序中使用的库函数和源码编译的目标代码和程序入口代码组合成可执行文件
   
读取用户输入英寸值，将值乘以 2.54 转换成厘米值并输出给用户

###### Two

1．C语言的基本模块是什么？

   变量和函数

2．什么是语法错误？写出一个英语例子和C语言例子。

   im' james;
   
   int a

3．什么是语义错误？写出一个英语例子和C语言例子。

  how you are;
    
  ```c
  int a;
  a = 10;
  printf(a, "a is number%d\n");
  ``` 

4．Indiana Sloth 编写了下面的程序，并征求你的意见。请帮助他评定


   ```c
   #include <studio.h>   
   int main(void)
   {
        int s;
        s = 56;
        printf("There are %d s weeks in a year", s);
        return 0;
   }
   ```

6．在main、int、function、char、=中，哪些是C语言的关键字？

   main int char

7．如何以下面的格式输出变量words和lines的值（这里，3020和350代表两个变量的值）？

  `printf("There were 3020 words and 350 lines", %d, %d);`
  
8. 在执行完第7、第8、第9行后，程序的状态分别是什么？

   ```c
   #include <stdio.h>   
   int main(void)
   (
       int a, b;
       a = 5;  // 7 
       b = 2;  // 8
       a = b;  // 9
       printf("%d %d\n", b, a);
       return 0;      
   )
   ```
   
   7: a = 5; b 未定义 8 a = 5 b = 2 9 a = 2 b = 2
   
8. 在执行完第7、第8、第9行后，程序的状态分别是什么？

   ```c
   #include <stdio.h>
   int main(void)
   {
       int x, y;
       x = 10;
       y = 5;      // 7
       y = x + y;   // 8
       x = x * y;   // 9
       printf("%d %d\n", x, y);
       return 0; 
   }
   ```
   
   7: x 10 y 5 8: x 10 y 15 9 x 150 15