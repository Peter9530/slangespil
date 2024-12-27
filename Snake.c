#include <conio.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "Snake.h"

// Laver boksen til banen
#define Height 20
#define Width 40

int SnaketailX[100], SnaketailY[100];

int SnaketailLenght;

int gameover, key, score;

int x,y, fruitx, fruity; // koordinaterne til hovedet på slangen

void setup();

void draw();

void input();

void logic();


void main() {
	setup();
	while (!gameover) {
	draw();
	input();
	logic();
	Sleep(34);
	}	}

void setup() {
	gameover = 0;

	// Koordinaterne til slangen
	x = Width / 2;
	y = Height / 2;

	fruitx = rand() % Width;
	fruity = rand() % Height;

	while (fruitx == 0) {
		fruitx = rand() % Width;
	}

	while (fruity == 0) {
		fruity = rand() % Height;
	}

	score = 0;

}

void draw() {
	system("cls");

	// Laver den øverste del af boksen
	for (int i = 0; i < Width + 2; i++)
		printf("-");
	printf("\n");

	for (int i = 0; i < Height; i++) {
		for (int j = 0; j <= Width; j++) {
			if (j == 0 || j == Width) // Laver siderne på boksen
				printf("#");
			if (i == y && j == x) // Laver hovedet på slangen
				printf("O");
			else if (i == fruity && j == fruitx) // Laver maden til slangen
				printf("*");
			else {
				int prTail = 0; // Her laver jeg slangen "nye krop" med o
				for (int k = 0; k < SnaketailLenght; k++) {
					if (SnaketailX[k] == j && SnaketailY[k] == i) {
						printf("o");
						prTail = 1;}
					}
				if (!prTail)
			printf(" ");}
			}
		printf("\n");}
for (int i = 0; i < Width + 2; i++) // Bunden af boksen som bliver lavet med -
	printf("-");
	printf("\n");

	printf("Score: %d", score);
	printf("\n");
	printf("Tryk W, A, S, D for at flytte slangen. \n");
	printf("Tryk X for at afslutte spillet");
}

// Denne funktion beskriver hvordan programmet tager imod input fra brugeren
void input() {
	if (kbhit()) {
		switch (getch()) {
			case 'a':
				if (key!=2)
					key=1;
				break;
			case 'd':
				if (key!=1)
					key=2;
				break;
			case 'w':
				if (key!=4)
					key=3;
				break;
			case 's':
				if (key!=3)
					key=4;
				break;
			case 'x':
				gameover = 1;
				break;
		}
	}
}

void logic() {

}
