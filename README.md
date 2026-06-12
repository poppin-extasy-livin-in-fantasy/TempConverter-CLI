# TempConverter-CLI
A simple temperature converter CLI written in C. Converts Fahrenheit to Celsius and Celsius to Fahrenheit. Input is processed char by char using getchar() with a custom parser. Set lower/upper limits and step via keyboard commands, then run.

## Features
- Fahrenheit → Celsius
- Celsius → Fahrenheit
- Input processed char by char using `getchar()` with a custom parser
- Set lower/upper limits and step via keyboard commands

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
l0 u300 s20r        or         l0 u300 s20 r
## Built with
- ISO C++20 Standard (/std:c++20)
- Visual Studio 2026
