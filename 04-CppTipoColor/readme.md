# 04-CppTipoColor

- ## ETAPA 1: Analisis del problema
   #### Transcripcion del problema: 
   _Crear un tipo Color conformado por 3 valores, basado en el modelo RGB1. Cada color estara conformado por la intensidad de rojo, verde y azul cuyo valores seran entre [0,255]. Se debe definir un tipo color para rojo, azul, cyan, magenta, amarillo, negro y blanco._
   
   #### Problema e hipotesis:
   _Se debe realizar funciones que puedan restar y sumar 2 tipo Color, también se debe obtener el complementario de un tipo Color. Se debe tener en cuenta que tipo Color tiene 2^24 valores._

- ## ETAPA 2: Diseño de la solucion
  _para realizar se pondra limites a los posbiles resultados. Si la suma excede al valor 255, el valor final sera 255, y en el caso de la resta, si es menor a 0, resultado final sera 0. Lo valores seran de tipo natural._
   #### Lexico:
   _Color ϵ{{a,b,c} uint8_t /{a,b,c} ϵ [0,255]}: uint8_t ϵ[0,255]_
   
   ### Prototipo:
   _Color sumarColor(const Color&, const Color&)_
   
	_Color mezclarColor(const Color&,const Color&)_
   
	_Color restarColor(const Color&, const Color&)_
   
	_Color getComplementario(const Color&)_

   ### IPO
	_sumarColor: ColorXColor ---> Color_

	_mezclarColor: ColorXColor ---> Color_

	_restarColor: ColorXColor ---> Color_

	_getComplementario: Color ---> Color_
   
   
