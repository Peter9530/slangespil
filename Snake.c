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
	}
}

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
					if (SnaketailX[k] == j
						&& SnaketailY[k] == i) {
						printf("o");
						prTail = 1;}
				}
				if (!prTail)
					printf(" ");
			}
		}
		printf("\n");
	}
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

// Denne funktion laver jeg logikken, der tjekker om slangen spiser, bevæger eller rammer sig selv
void logic() {
// Først skal jeg lave noget som opdaterer koordinaterne hver gang slangen bevæger sig
	int prevX = SnaketailX[0];
	int prevY = SnaketailY[0];
	int prevX2, prevY2;
	SnaketailX[0] = x;
	SnaketailY[0] = y;
	for (int i = 1; i < SnaketailLenght; i++) {
		prevX2 = SnaketailX[i];
		prevY2 = SnaketailY[i];
		SnaketailX[i] = prevX2;
		SnaketailY[i] = prevY2;
		prevX = prevX2;
		prevY = prevY2;
	}
	// Til at ændre retningen på slangen
	switch (key) {
		case 1:
			x--;
			break;
		case 2:
			x++;
			break;
		case 3:
			y--;
			break;
		case 4:
			y++;
			break;
		default:
			break;
	}
	// Skal lave en funktion til hvis spiller er slut
	if (x < 0 || x >= Width || y < 0 || y >= Height)
		gameover = 1;

	// Denne funktion tjekker for sammenstød med halen
	for (int i = 0; i < SnaketailLenght; i++) {
		if (SnaketailX[i] == x && SnaketailY[i] == y)
			gameover = 1;
	}
	// Skal bruge en funktion til at opdaterer scoren hvis slangen spiser frugt
	if (x == fruitx && y == fruity) {
		fruitx = rand() % Width;
		fruity = rand() % Height;
		while (fruitx == 0) // Laver nyt frugt
			fruitx = rand() % Width;
		while (fruity == 0)
			fruity = rand() % Height;
		score += 10;
			SnaketailLenght++;
	}
	}
