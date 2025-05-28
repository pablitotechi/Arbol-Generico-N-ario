# 🌳 Árbol Genérico N-ario en C++

**Autor:** Pablo Garro  
**Carné:** 2022150932  
**Curso:** Estructuras de Datos / Programación en C++

---

## 📌 Descripción

Este repositorio contiene una implementación de un árbol genérico (n-ario) en C++ utilizando clases plantilla (`template<class T>`), permitiendo almacenar y manipular cualquier tipo de dato. Cada nodo puede tener múltiples hijos y ofrece operaciones básicas para modificar y explorar el árbol.

---

## 🧠 ¿Qué funcionalidades ofrece?

- `addChild(const T&)`  
  Agrega un nuevo hijo al nodo actual.

- `removeChild(const T&)`  
  Elimina la primera ocurrencia de un hijo con el valor dado.

- `removeChildByIndex(int)`  
  Elimina un hijo por índice de posición en el vector de hijos.

- `setValue(const T&)`  
  Establece el valor del nodo actual.

- `getValue()` / `getValue() const`  
  Devuelve el valor almacenado en el nodo.

- `getChildren()` / `getChildren() const`  
  Retorna el vector de hijos del nodo.

- `print(int depth = 0)`  
  Imprime en consola el árbol con indentación jerárquica.

- `depth()`  
  Muestra una estimación de la profundidad del árbol. *(actualmente requiere mejora)*

- `Buscar(T&)`  
  Intenta localizar un valor dentro del árbol. *(actualmente incompleto y contiene errores lógicos)*

---

## ⚠️ Errores conocidos

- La función `depth()` no calcula correctamente los niveles del árbol.
- La función `Buscar()` tiene errores de sintaxis y lógica:
  - No implementa búsqueda recursiva.
  - Usa una variable `depth` no definida como parámetro o propiedad.
  - Falta una comparación válida: `if (t == children.at(i).getValue())`.
  - Debería recorrer todo el árbol y no solo los hijos directos.

---

## 🛠️ Ejemplo de uso

```cpp
lstdTreeNode<string> root("Raiz");
root.addChild("Hijo 1");
root.addChild("Hijo 2");

root.getChildren().at(0).addChild("Nieto 1.1");

root.print();
// Salida:
// Raiz
// |-- Hijo 1
// |   |-- Nieto 1.1
// |-- Hijo 2
