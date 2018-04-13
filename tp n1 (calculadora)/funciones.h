#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED


/** \brief pide un numero
 * \param var char pide una letra
 * \return float la muestra por scanf
 */
float IngresarNumero(char var);


/** \brief Suma los numeros ingresados
 * \param x float Se deposita en A el valor
 * \param y float Se deposita en B el valor
 */
float Sumar(float x ,float y );


/** \brief Resta los valores ingresados
 * \param x float Se deposita en A el valor
 * \param y float Se deposita en B el valor
 */
float Restar(float x , float y );


/** \brief Divide los valores ingresados
 * \param x float Se deposita en A el valor
 * \param y float Se deposita en B el valor
 */
float Dividir(float x, float y);


/** \brief Multiplica los valores ingresados
 * \param x float Se deposita en A el valor
 * \param y float Se deposita en B el valor
 */
float Multiplicacion(float x, float y);


/** \brief Factorial de los valores ingresados
 * \param x float Se deposita en A el valor
 */
int Factorial(int x);


/** \brief Muestra todas las operaciones
 */
float MostrarTodo(float A,float B);

#endif // FUNCIONES_H_INCLUDED
