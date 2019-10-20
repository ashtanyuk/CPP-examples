# Учебные коды программ для курса "Программирование на С++"

## Список примеров

| Раздел                            | Описание                          |
|----------------------------------|-----------------------------------|
|**01-CounterDemo**      | Пример класса "Счётчик"           |
|**02-SimpleStackDemo** | Пример класса "Простой стек" (на обычном массиве)|
|**03-StackDemo** | Пример класса "Стек" (с использованием динамической памяти)|
|**04-AB**| Простой пример с использованием членов-объектов и статических полей класса |
|**05-SimpleVectorDemo** | Пример класса "Вектор" на основе динамического массива |
|**06-FigureDemo** | Пример с одиночным наследованием (иерархия фигур). Проект Win32 VC++ 2005 |
| **07-SimpleComplex** | Пример с перегрузкой операций на примере класса *Complex* |
| **08-StackTemplate** | Пример шаблона класса *Stack* |
| **09-SimpleMap** | Простой пример с шаблоном ассоциативного массива *MyMap* |
| **10-Dictionary** | Пример с шаблоном ассоциативного массива *Dictionary* |



## Приложения



| Название  | Описание  |
|---------------|----------------|
| **A1-Warrior**    |   Иллюстрация технологии "письмо в конверте"  |


Для построения и запуска большинства программ в *unix* - подобных ОС нужно использовать команду **g++**. Рассмотрим использования данной команды на примере **CounterDemo**:

```
  g++ -o counter counter.cpp main.cpp
  ./counter
```

Проект **06-FigureDemo** представляет собой Win32-приложение с главным окном, использующее GDI.