# TempConverter-CLI
A simple temperature converter CLI written in C. Converts Fahrenheit to Celsius and Celsius to Fahrenheit. Input is processed char by char using getchar() with a custom parser. Set lower/upper limits and step via keyboard commands, then run.

## Features
- Fahrenheit → Celsius
- Celsius → Fahrenheit
- Input processed char by char using `getchar()` with a custom parser
- Set lower/upper limits and step via keyboard commands
# TempConverter-CLI
Простой конвертер температур с интерфейсом командной строки, написанный на языке C. Преобразует градусы Фаренгейта в градусы Цельсия и наоборот. Входные данные обрабатываются посимвольно с помощью функции getchar() и пользовательского парсера. Установите нижний и верхний пределы, а также шаг с помощью клавиатурных команд, а затем запустите программу.


## Особенности
- Фаренгейт → Цельсий
- Цельсий → Фаренгейт
- Ввод обрабатывается посимвольно с помощью `getchar()` с использованием пользовательского парсера
- Установить нижний/верхний пределы и шаг с помощью клавиатурных команд


## Применение
Запустите программу и выберите режим:


Нажмите клавишу «f» для переключения с градусов Фаренгейта на градусы Цельсия
Нажмите клавишу «c», чтобы перейти из градусов Цельсия в градусы Фаренгейта




Затем введите ограничения:


l + число → нижний предел


u + число → верхний предел


s + число → шаг


r → запустить


## Пример


f




Модель 10 U300 S20R




с




10 у300 с20 р




<img width=" 1095" height="413" alt="изображение" src=" https://github.com/user-attachments/assets/5e967b0a-6f23-4a25-9ecc-8b95290906a7" />




## Создано с помощью
- По умолчанию (стандарт ISO C11 (/std:c11))
- Visual Studio 2026

## Usage
Run the program and choose mode:

Press f for Fahrenheit to Celsius
Press c for Celsius to Fahrenheit


Then enter limits:

l + number → lower limit

u + number → upper limit

s + number → step

r → run

## Example

f


l0 u300 s20r


с


l0 u300 s20 r


<img width="1095" height="413" alt="изображение" src="https://github.com/user-attachments/assets/5e967b0a-6f23-4a25-9ecc-8b95290906a7" />

## Built with
- С Default (ISO C11 Standard (/std:c11))
- Visual Studio 2026
