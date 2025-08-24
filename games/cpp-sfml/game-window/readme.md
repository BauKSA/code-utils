## Game Window
Es una ventana de juego simple, manejada con un patró Singleton para que exista una única instancia.
Tiene, además, un método pollEvent que recibe TODOS los eventos que haya en cola y los reparte por sus handlers correspondientes. De esta manera, logramos unificar los eventos y que pueda haber varias ramas de handlers.