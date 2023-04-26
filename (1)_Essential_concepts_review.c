//include standard input/putput lib
  #include <stdio.h>
//

//define constants
  #define k 4
//

//declare var
  int a;
  char b;
  float c;
  double d;
// and void

//tipo enum
  enum months
  {
    Jan=1, Fev, Mar, Ap, May, Jun
  } month;
//

//typedef: define new type names
  typedef int idade;
  typedef float peso;
  idade My = 60;
  idade Your = 18;
  peso Our = 150.7;
//

//Standard i/o
  void stdio()
  {
    printf("Type some value for a");
    /*
    \n newl 
    \r return c 
    \t tab 
    \b backspace 
     \"aspas 
    \\bar 
    \f salto de pagina
    */  
    scanf("%d",&a);
    /*
    %d, %f, %c, %s, %p
    (int/ float/ char/ string/ pointer)
    %o(oct), %x(hex)
     %i(dec,oct,hex)
    %s (string),
    %lld(long long int)
     */
  }
//

//Aritmetic operat
  float f = 4+5-(2*(8/7))+(25%2);
//


//Operadores relac.
/*
  <  menor
  >= maior ou igual
  == igual
  != diferente
  (retorno da operação como V ou F)
*/

//operadores Lógicos
/*
  && e
  || ou
  !  não/negação
*/

//tabela ordem de precedência dos operadoes
/*
  () ++ -- 
  * / % + -
  < <= ,etc...
  == !=
  && || =
*/

//Conditional Operator
void conditional_operator()
{
    int age=0;
    printf("Op.Condic.\nd\rDigite a idade:");
    scanf("%d",&age);
    
    (age>=18)?printf("ja pode ser preso!"):printf("É de menor!");
}
//

//if and switch statement
void condit_statements()
{
  int var;
  /*
    if(isso estiver certo)
    {
      faz isso;
    }
    else if(isto estiver certo)
    {
      faz isso 
    }
    else
    {do that}
*/
  switch(var)
    {
      case 1:
        //do it;
        break;
      case 2/*constant*/:
        //do that;
        break;
      default:
        /*(in case of anything)
        do it*/
        break;
  }
}
//

//STRING/ARRAY

//LOOPS
loop_for(){
  for(int i=0; i<10;i++)
    {
      printf("%d\n",i);
    }
}

/* for the variable i(integer) starting with 0,
the rule "i++" will sum 1 to the value of the integer every iteration
of the loop, and the rule "i<10" will stop the loop when "i"
turn into this value
*/  
while_loop(){
  int k;
  while(k!=0){
    print(" Enter the value of k");
    scanf("%d",k);
    printf("Still on the loop");
  }
}
/*the loop will not stop until the while condition is served
*/

//FUNCTIONS

//POINTER

//STRUCT





int main(void)
{
  conditional_operator();
  return 0;
}
