Algunas notas...

**Ejercicio 2**
Las clases incluyen chequeos internos para validar los valores recibidos. Soy consciente de que, en casos de error, los miembros pueden ser inicialmente construidos con valores inválidos, pero estos son verificados de inmediato dentro del constructor. Podría realizar el chequeo dentro y usar asignacion en vez de inciializacion con los atributojsajdasj s, pero conceptualmente el resultado es el mismo, ya que en ambos casos se impide la creación efectiva del objeto mediante una excepción.
Tambien aqui mantengo el invariante indicado en la consigna de que el semieje 'a' en la elipse siempre sea el semieje mas grande. Lo que no hago es indicar que, en el caso que sucede, invirte los valores de 'a' y 'b' para mantener esta invariante mediante un cout en consola.
Tambien podria testear que los setter esten manejando bien el throw del error, pero ya testeo este throw en la creacion del objeto y funciono bien, por ende siento que abrumaria el codigo del main y lo haria menos legible para demostrar una funcion simple.

**Ejercicio 3**
Para representar los double con un solo decimal, utilicé un ostringstream. El uso de to_string() no fue util aqui ya que, al aplicarse sobre valores double, genera por defecto una representación con seis cifras decimales, incluso si el valor ya había sido truncado o redondeado previamente.
Por otro lado, la función setprecision() no puede aplicarse directamente sobre un double ni sobre to_string(), ya que está pensada exclusivamente para usarse con flujos de salida (cout, ostringstream, etc...). Por esta razón, fue necesario crear un ostringstream, aplicar sobre él fixed y setprecision(1), y luego obtener el string resultante con .str().