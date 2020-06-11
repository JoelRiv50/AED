# 03-CppPresedenciaDeOperadores

- ## Objetivo 
  *Demostrar el uso de operadores booleanos y expresiones complejas.*
- ##  Problema
  *Determinar por medio de un codigo los años bisiestos*
- ##  Lexico
  *IsBisiesto: Z -> Z / IsBisiesto = X>1582 ^ (year%4 == 0)  ^  (year%100 != 0  v year%400 == 0)*
  
- ## Prototipo
  *bool IsBisiesto(unsingned);*
- ## Definición
   *bool  IsBisiesto(unsigned year)*
  {
   
    *year>1582 and year%4==0 and (year%100!=0 or year%400==0);*
   
   }
- ## Árbol de expresión asociado a la expresión de retorno de la función

     ![arbol](https://user-images.githubusercontent.com/63814155/84398304-13c6e200-ac00-11ea-8dbc-950d2b7bbf1d.png)
