/*Un centro cultural se dedica al prestamo de dos tipos de materiales:
 * Discos y Libros.Para los dos se guarda informacion general,
 * como su codigo identificativo, el titulo y el autor.
 * En el caso de os Libros, almacenamos tambien el numero de paginas, y para los Discos
 * el nombre de la discografica. Al Centro cultural acuden una seria de Clientes
 * (de los que se guarda su DNI y nombre), que realizan una serie de peticiones
 * de discos o libros(cmo mucho hasta 5).Para cada peticion se guarda
 * la fecha de inicio y fin del prestamo.*/


#include <iostream>
#include "Gestion.h"
#include "Cliente.h"
#include "Disco.h"
#include "Libro.h"



int main() {

    Cliente* cliente1 = new Cliente("Braian", "12345678");
    Cliente* cliente2 = new Cliente("Juan", "87654321");
    Disco* disco1 = new Disco("Disco 1", "Autor 1", 1, "Discografica 1", cliente1);
    Disco* disco2 = new Disco("Disco 2", "Autor 2", 2, "Discografica 2", cliente2);

    disco1->Pedir();
    disco2->Pedir();

    Libro* libro1 = new Libro("Harry Potter", "Agatha christi", 1, 500, cliente1);

    libro1->Pedir();

    delete cliente1;
    delete cliente2;
    delete disco1;
    delete disco2;
    delete libro1;



    return 0;
}
