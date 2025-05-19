Algunas notas...

**Ejercicio 2**
Las clases incluyen chequeos internos para validar los valores recibidos. Soy consciente de que, en casos de error, los miembros pueden ser inicialmente construidos con valores inválidos, pero estos son verificados de inmediato dentro del constructor. Podría realizar el chequeo dentro y usar asignacion en vez de inciializacion con los atributos, pero conceptualmente el resultado es el mismo, ya que en ambos casos se impide la creación efectiva del objeto mediante una excepción.
Tambien aqui mantengo el invariante indicado en la consigna de que el semieje 'a' en la elipse siempre sea el semieje mas grande. Lo que no hago es indicar que, en el caso que sucede, inverte los valores de 'a' y 'b' para mantener esta invariante mediante un cout en consola.
