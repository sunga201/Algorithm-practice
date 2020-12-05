#include <iostream>
#include <algorithm>
#include <ctime>

using namespace std;
const int MAX_SIZE = 25;
int t, num; //퍼즐 상태 갯수
int solIdx_2;
char sol_2[500];
char mirror[10][5][5];
enum { UP, DOWN, LEFT, RIGHT };

int ipNum, pNum;// 퍼즐 상태 번호

typedef struct point {
	int p_x;
	int p_y;
}Point;


typedef struct puzzle {
	char arr[MAX_SIZE];
	int f;
	int g;
	int h;
	int blank;
}puzzle;

typedef struct childList {
	puzzle* list_p[4];
	int listSize;
}cList;

void moveBlank_2(int);
int getNumber(int, int);
void setBlank(int, int);
void setBlank_r(int, int);
Point getPosition(int);
void printSolutionStandard();
void circulBlank(bool);
void circulBlank_horizontal(bool);
void setRightTopPiece();
void setLeftBottomPiece();

void init(puzzle*);
int countInv(puzzle*);
void print(puzzle*);
int linearConflict(puzzle*);
int hamming(puzzle*);
int manhattan(puzzle*);
bool moveBlank(puzzle*, int);
puzzle* getNeighbor(puzzle*, int);
bool isSame(puzzle*, puzzle*);
bool inSolution(puzzle**, puzzle*);
puzzle* getList(cList*);
puzzle* search(puzzle*, int, int);
int getBlank(char*);
void printSolution(puzzle**, puzzle*);
void getSol(puzzle*);
void puzzleSolution(puzzle*);

void puzzleSolutionStandard() {
	solIdx_2 = 0;
	Point p, blank;
	int x = 0, y = 0, check = 0, xBorder = 0, yBorder = 0;//check 0 : 가로 맞추는 중  1 : 세로 맞추는 중
	while (x * 5 + y + 1 != 19) {
		if (x * 5 + y + 1 != getNumber(x, y)) {
			p = getPosition(x * 5 + y + 1);
			blank = getPosition(MAX_SIZE);
			if (y == 4) {
				if (blank.p_x == x && blank.p_y == y && blank.p_x + 1 == p.p_x && blank.p_y == p.p_y) {
					//공백칸이 넣고싶은 자리에 있고, 그 밑에 옮길 조각이 있을때 공백 내리고 바로 끝냄
					moveBlank_2(DOWN);
					x = ++xBorder;
					y = yBorder++;
					check = 1;
					continue;
				}
				while (p.p_x != (x + 2) || p.p_y != y) {
					//먼저 목표 지점과 열을 맞춘다.

					if (y > p.p_y) {
						if (blank.p_x == p.p_x && blank.p_y < p.p_y) {
							if (blank.p_x == 4) moveBlank_2(UP);
							else moveBlank_2(DOWN);
						}
						if (blank.p_x == x) moveBlank_2(DOWN);
						setBlank(p.p_x, p.p_y + 1); //가로 -> 세로 순으로 공백 움직임
						moveBlank_2(LEFT);
						p = getPosition(x * 5 + y + 1);
						while (p.p_y != y) {
							circulBlank(true); //목표 조각을 오른쪽으로 옮김(true 오른쪽, false 왼쪽)
							p = getPosition(x * 5 + y + 1);
						}
					}
					//여기까지 끝났으면 열은 맞춰진 상태

					p = getPosition(x * 5 + y + 1);
					//이제 목표지점과 행을 맞춘다.
					if (x + 2 < p.p_x) {
						blank = getPosition(MAX_SIZE);
						if (blank.p_y == p.p_y) moveBlank_2(LEFT);
						setBlank_r(p.p_x - 1, p.p_y); //세로 -> 가로 순으로 공백을 맞춘다.
						moveBlank_2(DOWN);
						p = getPosition(x * 5 + y + 1);
						while (p.p_x != x + 2) {
							circulBlank_horizontal(false); //목표 조각을 위로 옮김(true 아래쪽, false 위쪽)
							p = getPosition(x * 5 + y + 1);
						}
					}

					else if (x + 2 > p.p_x) {
						setBlank_r(p.p_x + 1, p.p_y);
						moveBlank_2(UP);
					}
				}
				blank = getPosition(MAX_SIZE);
				if (blank.p_x > p.p_x && blank.p_y == p.p_y) moveBlank_2(LEFT);
				//공백칸이 옮길 조각과 같은 열에 있고, 더 밑의 행에 있을 경우 공백칸을 세로->가로 순으로 움직이면
				//맞춰놓은 목표 조각의 위치가 달라지므로 목표조각에 영향을 미치지 않게 공백을 한칸 왼쪽으로 옮겨준다.
				setBlank_r(p.p_x - 1, p.p_y);
				setRightTopPiece(); //이 작업이 끝나면 맨 끝 열에 목표조각이 들어감
			}

			else if (x == 4) {
				if (blank.p_x == x && blank.p_y == y && blank.p_x == p.p_x && blank.p_y + 1 == p.p_y) {
					//공백칸이 넣고싶은 자리에 있고, 그 오른쪽에 옮길 조각이 있을때 공백 오른쪽으로 옮기고 바로 끝냄
					moveBlank_2(RIGHT);
					x = xBorder;
					y = yBorder;
					check = 0;
					continue;
				}
				while (p.p_x != x || p.p_y != y + 2) {
					//먼저 목표 지점과 열을 맞춘다.
					if (y + 2 < p.p_y) {
						if (blank.p_x == p.p_x) { //만약 공백칸과 목표 조각이 같은 행에 있을 경우
												  //setBlank()를 수행하면 목표조각의 위치가 바뀌게 된다.
												  //목표조각의 위치가 바뀌지 않게 공백칸의 위치를 한칸 올리거나 내린다.
							if (blank.p_x == 4) moveBlank_2(UP);
							else moveBlank_2(DOWN);
						}
						setBlank(p.p_x, p.p_y - 1); //가로 -> 세로 순으로 공백 옮김
						moveBlank_2(RIGHT);
						p = getPosition(x * 5 + y + 1);
						while (p.p_y != y + 2) {
							circulBlank(false); //왼쪽으로 가면 false, 오른쪽으로 가면 true
							p = getPosition(x * 5 + y + 1);
						}
					}

					else if (y + 2 > p.p_y) {
						setBlank(p.p_x, p.p_y + 1); //에러 없음
						moveBlank_2(LEFT);
					}
					//여기까지 끝났으면 열은 맞춰진 상태
					p = getPosition(x * 5 + y + 1);
					//이제 목표지점과 행을 맞춘다.
					if (x > p.p_x) {
						if (blank.p_y == p.p_y && blank.p_x < p.p_x) moveBlank_2(LEFT);
						if (blank.p_y == y) moveBlank_2(RIGHT); //만일 공백칸이 목표 위치에 있을 경우
																//세로 -> 가로 순으로 이동하면 이미 맞춰놓은 조각을 건드림
																//안건드리게 공백칸을 한칸 오른쪽으로 옮김
						setBlank_r(p.p_x + 1, p.p_y);
						moveBlank_2(UP);
						p = getPosition(x * 5 + y + 1);
						while (p.p_x != x) {
							circulBlank_horizontal(true);
							p = getPosition(x * 5 + y + 1);
						}
					}
				}
				blank = getPosition(MAX_SIZE);
				if (blank.p_x == p.p_x && blank.p_y > p.p_y) moveBlank_2(UP); //빈공간이 맨 아래에 있고, 목표조각보다 오른쪽에 있을 경우
				setBlank(p.p_x, p.p_y - 1);
				setLeftBottomPiece();
			}
			else {
				if (check == 0) {
					//먼저 목표 지점과 열을 맞춘다.
					if (y < p.p_y) {
						if (blank.p_x == p.p_x && blank.p_y > p.p_y) {
							if (blank.p_x == 4) moveBlank_2(UP);
							else moveBlank_2(DOWN);
						}
						setBlank(p.p_x, p.p_y - 1);
						moveBlank_2(RIGHT);
						p = getPosition(x * 5 + y + 1);
						while (p.p_y != y) {
							circulBlank(false); //옮길 조각이 왼쪽으로 가면 false, 오른쪽으로 가면 true
							p = getPosition(x * 5 + y + 1);
						}
					}

					else if (y > p.p_y) {
						if (blank.p_x == x && p.p_y < y - 1) moveBlank_2(DOWN);
						if (blank.p_x == p.p_x && blank.p_y < p.p_y) {
							if (blank.p_x == 4) moveBlank_2(UP);
							else moveBlank_2(DOWN);
						}
						setBlank(p.p_x, p.p_y + 1);
						moveBlank_2(LEFT);
						p = getPosition(x * 5 + y + 1);
						while (p.p_y != y) {
							circulBlank(true); //왼쪽으로 가면 false, 오른쪽으로 가면 true
							p = getPosition(x * 5 + y + 1);
						}
					}
					//여기까지 끝났으면 열은 맞춰진 상태
					p = getPosition(x * 5 + y + 1);
					//이제 목표지점과 행을 맞춘다.
					if (x < p.p_x) {
						blank = getPosition(MAX_SIZE);
						if (p.p_x - 1 == x && blank.p_y < y) setBlank_r(p.p_x + 1, p.p_y + 1);
						if (blank.p_y == p.p_y && blank.p_x > p.p_x) moveBlank_2(RIGHT);
						setBlank_r(p.p_x - 1, p.p_y);
						moveBlank_2(DOWN);
						p = getPosition(x * 5 + y + 1);
						while (p.p_x != x) {
							circulBlank_horizontal(false);
							p = getPosition(x * 5 + y + 1);
						}
					}
					//제자리에 맞춰진 상태
				}

				else {
					//먼저 목표 지점과 행을 맞춘다.
					if (x < p.p_x) {
						if (blank.p_y == p.p_y && blank.p_x > p.p_x) moveBlank_2(RIGHT);
						setBlank_r(p.p_x - 1, p.p_y);
						moveBlank_2(DOWN);
						p = getPosition(x * 5 + y + 1);
						while (p.p_x != x) {
							circulBlank_horizontal(false); //위로 가면 false, 아래로 가면 true
							p = getPosition(x * 5 + y + 1);
						}
					}

					else if (x > p.p_x) {
						if (blank.p_y == y && p.p_x < x - 1) moveBlank_2(RIGHT);
						if (blank.p_y == p.p_y && blank.p_x < p.p_x) {
							if (blank.p_y == 4) moveBlank_2(LEFT);
							else moveBlank_2(RIGHT);
						}
						setBlank_r(p.p_x + 1, p.p_y);
						moveBlank_2(UP);
						p = getPosition(x * 5 + y + 1);
						while (p.p_x != x) {
							circulBlank_horizontal(true); //위로 가면 false, 아래로 가면 true
							p = getPosition(x * 5 + y + 1);
						}
					}
					//여기까지 끝났으면 행은 맞춰진 상태
					p = getPosition(x * 5 + y + 1);
					//이제 목표지점과 열을 맞춘다.
					if (y < p.p_y) {
						blank = getPosition(MAX_SIZE);
						if (p.p_y - 1 == y && blank.p_x < p.p_x) setBlank(p.p_x + 1, p.p_y + 1);
						if (blank.p_x == p.p_x && blank.p_y > p.p_y) moveBlank_2(DOWN);
						setBlank(p.p_x, p.p_y - 1);
						moveBlank_2(RIGHT);
						p = getPosition(x * 5 + y + 1);
						while (p.p_y != y) {
							circulBlank(false);
							p = getPosition(x * 5 + y + 1);
						}
					}
					//제자리에 맞춰진 상태
				}
			}
		}
		switch (check) {
		case 0:
			if (y == 4) {
				x = ++xBorder;
				y = yBorder++;
				check = 1;
			}
			else y++;
			break;
		case 1:
			if (x == 4) {
				x = xBorder;
				y = yBorder;
				check = 0;
			}
			else x++;
			break;
		}
	}
	int blankPoint; //19번 퍼즐을 맞췄을 때 빈칸의 위치   0 : 20번, 1 : 24번, 2 : 25번
	blank = getPosition(MAX_SIZE);
	if (mirror[num][4][4] == 19) { //19번 퍼즐이 25번 자리에 있을 경우		
		if (blank.p_y == 4) { //20번 자리에 공백칸 존재
			moveBlank_2(DOWN);
			moveBlank_2(LEFT);
			moveBlank_2(UP);
			moveBlank_2(RIGHT);//19번 조각 맞춤
			blankPoint = 0;
		}
		else {
			if (blank.p_x == 3) {
				moveBlank_2(DOWN);
				moveBlank_2(RIGHT);
				moveBlank_2(UP);
				moveBlank_2(LEFT);
				moveBlank_2(DOWN);
			}
			else {//blank.p_x ==4
				moveBlank_2(RIGHT);
				moveBlank_2(UP);
				moveBlank_2(LEFT);
				moveBlank_2(DOWN);
			}
			blankPoint = 1;
		}
	}
	else if (mirror[num][4][3] == 19) { //19번 퍼즐이 24번 자리에 존재
		if (blank.p_y == 3) {
			moveBlank_2(DOWN);
		}
		else {//blank.p_y==4
			if (blank.p_x == 3) {
				moveBlank_2(LEFT);
				moveBlank_2(DOWN);
			}
			else {
				moveBlank_2(UP);
				moveBlank_2(LEFT);
				moveBlank_2(DOWN);
			}
		}
		blankPoint = 1;
	}
	else if (mirror[num][3][4] == 19) { //19번 퍼즐이 20번 자리에 존재
		if (blank.p_y == 4) {
			moveBlank_2(LEFT);
			moveBlank_2(UP);
			moveBlank_2(RIGHT);
		}
		else {//blank.p_y==3
			if (blank.p_x == 3) {
				moveBlank_2(RIGHT);
			}
			else {
				moveBlank_2(UP);
				moveBlank_2(RIGHT);
			}
		}
		blankPoint = 0;
	}
	else {
		if (blank.p_y == 3) blankPoint = 1;
		else if (blank.p_x == 3) blankPoint = 0;
		else blankPoint = 2;
	}

	switch (blankPoint) {
	case 0://빈칸이 20번에 있을 때
		if (mirror[num][4][4] == 20) moveBlank_2(DOWN);
		break;
	case 1: //빈칸이 24번에 있을 때
		if (mirror[num][4][4] == 24) moveBlank_2(RIGHT);
		break;
	}
	//print();
	pNum++;
}

int getNumber(int x, int y) {
	return mirror[num][x][y];
}

Point getPosition(int obj) {
	Point p;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (mirror[num][i][j] == obj) {
				p.p_x = i;
				p.p_y = j;
				return p;
			}
		}
	}
}

void setBlank(int x, int y) { //가로->세로
	Point blank = getPosition(MAX_SIZE);
	if (blank.p_y < y) {
		while (blank.p_y < y) {
			moveBlank_2(RIGHT);
			blank = getPosition(MAX_SIZE);
		}
	}
	else {
		while (blank.p_y > y) {
			moveBlank_2(LEFT);
			blank = getPosition(MAX_SIZE);
		}
	}
	if (blank.p_x < x) {
		while (blank.p_x < x) {
			moveBlank_2(DOWN);
			blank = getPosition(MAX_SIZE);
		}
	}
	else {
		while (blank.p_x > x) {
			moveBlank_2(UP);
			blank = getPosition(MAX_SIZE);
		}
	}
}

void setBlank_r(int x, int y) { //세로->가로
	Point blank = getPosition(MAX_SIZE);
	if (blank.p_x < x) {
		while (blank.p_x < x) {
			moveBlank_2(DOWN);
			blank = getPosition(MAX_SIZE);
		}
	}
	else {
		while (blank.p_x > x) {
			moveBlank_2(UP);
			blank = getPosition(MAX_SIZE);
		}
	}
	if (blank.p_y < y) {
		while (blank.p_y < y) {
			moveBlank_2(RIGHT);
			blank = getPosition(MAX_SIZE);
		}
	}
	else {
		while (blank.p_y > y) {
			moveBlank_2(LEFT);
			blank = getPosition(MAX_SIZE);
		}
	}
}

void printSolutionStandard() {
	printf("#%d %d ", num + 1, solIdx_2);
	for (int i = 0; i < solIdx_2; i++) {
		printf("%c ", sol_2[i]);
	}
	printf("\n\n");
}


void circulBlank(bool isRight) {
	Point blank = getPosition(MAX_SIZE);
	bool isBottom = false;
	if (blank.p_x == 4) isBottom = true;
	if (isRight) {
		if (isBottom) {
			moveBlank_2(UP);
			moveBlank_2(RIGHT);
			moveBlank_2(RIGHT);
			moveBlank_2(DOWN);
			moveBlank_2(LEFT);
		}
		else {
			moveBlank_2(DOWN);
			moveBlank_2(RIGHT);
			moveBlank_2(RIGHT);
			moveBlank_2(UP);
			moveBlank_2(LEFT);
		}
	}
	else {
		if (isBottom) {
			moveBlank_2(UP);
			moveBlank_2(LEFT);
			moveBlank_2(LEFT);
			moveBlank_2(DOWN);
			moveBlank_2(RIGHT);
		}
		else {
			moveBlank_2(DOWN);
			moveBlank_2(LEFT);
			moveBlank_2(LEFT);
			moveBlank_2(UP);
			moveBlank_2(RIGHT);
		}
	}
}

void circulBlank_horizontal(bool isDown) {
	Point blank = getPosition(MAX_SIZE);
	bool isRight = false;
	if (blank.p_y == 4) isRight = true;
	if (isDown) {
		if (isRight) {
			moveBlank_2(LEFT);
			moveBlank_2(DOWN);
			moveBlank_2(DOWN);
			moveBlank_2(RIGHT);
			moveBlank_2(UP);
		}
		else {
			moveBlank_2(RIGHT);
			moveBlank_2(DOWN);
			moveBlank_2(DOWN);
			moveBlank_2(LEFT);
			moveBlank_2(UP);
		}
	}

	else {
		if (isRight) {
			moveBlank_2(LEFT);
			moveBlank_2(UP);
			moveBlank_2(UP);
			moveBlank_2(RIGHT);
			moveBlank_2(DOWN);
		}
		else {
			moveBlank_2(RIGHT);
			moveBlank_2(UP);
			moveBlank_2(UP);
			moveBlank_2(LEFT);
			moveBlank_2(DOWN);
		}
	}
}

void moveBlank_2(int direction) {
	Point blank = getPosition(MAX_SIZE);
	switch (direction) {
	case 0: //UP
		if (blank.p_x > 0) mirror[num][blank.p_x][blank.p_y] = mirror[num][blank.p_x - 1][blank.p_y];
		else {
			//printf("공백칸을 위로 옮길 수 없습니다.\n");
			return;
		}
		mirror[num][blank.p_x - 1][blank.p_y] = MAX_SIZE;
		sol_2[solIdx_2++] = 'U';
		break;

	case 1: //DOWN
		if (blank.p_x < 4) mirror[num][blank.p_x][blank.p_y] = mirror[num][blank.p_x + 1][blank.p_y];
		else {
			//printf("공백칸을 아래로 옮길 수 없습니다.\n");
			return;
		}
		mirror[num][blank.p_x + 1][blank.p_y] = MAX_SIZE;
		sol_2[solIdx_2++] = 'D';
		break;

	case 2: //LEFT
		if (blank.p_y > 0) mirror[num][blank.p_x][blank.p_y] = mirror[num][blank.p_x][blank.p_y - 1];
		else {
			//printf("공백칸을 왼쪽으로 옮길 수 없습니다.\n");
			return;
		}
		mirror[num][blank.p_x][blank.p_y - 1] = MAX_SIZE;
		sol_2[solIdx_2++] = 'L';
		break;

	case 3: //RIGHT
		if (blank.p_y < 4) mirror[num][blank.p_x][blank.p_y] = mirror[num][blank.p_x][blank.p_y + 1];
		else {
			//printf("공백칸을 오른쪽으로 옮길 수 없습니다.\n");
			return;
		}
		mirror[num][blank.p_x][blank.p_y + 1] = MAX_SIZE;
		sol_2[solIdx_2++] = 'R';
		break;
	}
}

void setRightTopPiece() {
	moveBlank_2(UP);
	moveBlank_2(LEFT);

	moveBlank_2(DOWN);
	moveBlank_2(RIGHT);

	moveBlank_2(DOWN);
	moveBlank_2(LEFT);
	moveBlank_2(UP);
	moveBlank_2(UP);

	moveBlank_2(RIGHT);
	moveBlank_2(DOWN);
}

void setLeftBottomPiece() {
	moveBlank_2(LEFT);
	moveBlank_2(UP);
	moveBlank_2(RIGHT);
	moveBlank_2(DOWN);
	moveBlank_2(RIGHT);

	moveBlank_2(UP);
	moveBlank_2(LEFT);
	moveBlank_2(LEFT);

	moveBlank_2(DOWN);
	moveBlank_2(RIGHT);
}

void init(puzzle * p) {
	int tmp;
	for (int i = 0; i < MAX_SIZE; i++) {
		cin >> tmp;
		if (tmp == MAX_SIZE) p->blank = i;
		p->arr[i] = (char)tmp;
		mirror[num - 1][i / 5][i % 5] = (char)tmp;
	}
}

int countInv(puzzle * p) {
	int i, j, inv = 0;

	for (j = 0; j < MAX_SIZE; j++) {
		for (i = j + 1; i < MAX_SIZE; i++) {
			if ((p->arr[j] == MAX_SIZE) || (p->arr[i] == MAX_SIZE)) continue;
			if (p->arr[j] > p->arr[i]) inv++;
		}
	}
	return inv;
}

int hamming(puzzle * p) {
	int ret = 0;
	for (int i = 0; i < MAX_SIZE; i++) {
		if (p->arr[i] != i + 1) ret++;
	}
	return ret;
}

int manhattan(puzzle * p) {
	int x1, y1, x2, y2, score = 0;
	for (int i = 0; i < MAX_SIZE; i++) {
		if (p->arr[i] == MAX_SIZE) continue;
		int pieceVal = p->arr[i] - 1;
		x1 = pieceVal / 5;
		y1 = pieceVal % 5;
		x2 = i / 5;
		y2 = i % 5;
		score += (abs(x2 - x1) + abs(y2 - y1));
	}
	return score;
}

const int ROW = 5, COL = 5;

int linearConflict(puzzle * p) {
	char obj_x[ROW][COL];
	char obj_y[ROW][COL];
	int i, j, k, m, idx, linearC = 0;
	m = manhattan(p);
	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COL; j++) {
			idx = i * ROW + j;
			if (p->arr[idx] == MAX_SIZE) {
				obj_x[i][j] = -1;
				continue;
			}
			obj_x[i][j] = (p->arr[idx] - 1) / 5;
		}
	}

	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COL; j++) {
			idx = i * ROW + j;
			if (p->arr[idx] == MAX_SIZE) {
				obj_y[i][j] = -1;
				continue;
			}
			obj_y[i][j] = (p->arr[idx] - 1) % 5;
		}
	}
	for (i = 0; i < COL; i++) {
		for (j = 0; j < ROW - 1; j++) {
			if (obj_x[i][j] == -1) continue;
			for (k = j + 1; k < ROW; k++) {
				if (obj_y[j][i] == obj_y[k][i] && p->arr[j * ROW + i] > p->arr[k * ROW + i]) linearC++;
				if (obj_x[i][j] == obj_x[i][k] && p->arr[i * ROW + j] > p->arr[i * ROW + k]) linearC++;
			}
		}
	}
	return m + 2 * linearC;
}

bool moveBlank(puzzle * tmp, int mode) {
	int blankIdx = tmp->blank;
	switch (mode) {
	case 0: //UP
		if (blankIdx < 5) {
			return false;
		}
		tmp->arr[blankIdx] = tmp->arr[blankIdx - 5];
		tmp->arr[blankIdx - 5] = MAX_SIZE;
		tmp->blank = blankIdx - 5;
		break;

	case 1: //DOWN
		if (blankIdx > 19) {
			return false;
		}
		tmp->arr[blankIdx] = tmp->arr[blankIdx + 5];
		tmp->arr[blankIdx + 5] = MAX_SIZE;
		tmp->blank = blankIdx + 5;
		break;

	case 2: //LEFT
		if (blankIdx % 5 == 0) {
			return false;
		}
		tmp->arr[blankIdx] = tmp->arr[blankIdx - 1];
		tmp->arr[blankIdx - 1] = MAX_SIZE;
		tmp->blank = blankIdx - 1;
		break;

	case 3: //RIGHT
		if (blankIdx % 5 == 4) {
			return false;
		}
		tmp->arr[blankIdx] = tmp->arr[blankIdx + 1];
		tmp->arr[blankIdx + 1] = MAX_SIZE;
		tmp->blank = blankIdx + 1;
		break;
	}
	return true;
}

puzzle* getNeighbor(puzzle * p, int i) {
	puzzle* tmp = (puzzle*)malloc(sizeof(puzzle));
	for (int i = 0; i < MAX_SIZE; i++) {
		for (int j = 0; j < MAX_SIZE; j++) {
			tmp->arr[j] = p->arr[j];
		}
		tmp->f = p->f;
		tmp->g = p->g;
		tmp->h = p->h;
		tmp->blank = p->blank;
	}
	if (!moveBlank(tmp, i)) {
		free(tmp);
		return NULL;
	}
	return tmp;
}

bool isSame(puzzle * a, puzzle * b) {
	int i;
	for (i = 0; i < MAX_SIZE; i++) {
		if (a->arr[i] != b->arr[i])
			break;
	}
	if (i != MAX_SIZE) return false;
	return true;
}

int lb, solIdx;
bool inSolution(puzzle * sol[], puzzle * temp) {
	for (int i = 0; i < solIdx; i++) {
		if (isSame(sol[i], temp)) return true;
	}
	return false;
}

puzzle* getList(cList * list) {
	puzzle* ret = list->list_p[--(list->listSize)];
	return ret;
}

cList* initList() {
	cList* list = (cList*)malloc(sizeof(cList));
	list->listSize = 0;
	return list;
}

puzzle* sol[1000];
double hFactor = 1.0;
double mulFactor;

void copy(puzzle * a, puzzle * b) {
	for (int i = 0; i < MAX_SIZE; i++) {
		b->arr[i] = a->arr[i];
	}
	b->f = a->f;
	b->g = a->g;
	b->h = a->h;
	b->blank = a->blank;
}
time_t checkS, checkE;
int checkNum = 0;
bool isSlow = false;
puzzle* search(puzzle * p, int g, int threshold) {
	checkNum++;
	/*	checkE = clock();
	if ((checkE-checkS)/CLOCKS_PER_SEC>40) { //40초 이상 걸리면 가중치 올려서 처음부터 다시 시도
		cout << (checkE - checkS) / CLOCKS_PER_SEC << endl;
		isSlow = true;
		return p;
	}*/

	if (checkNum > 5000000) { //search 500만번 수행하면 가중치 올려서 처음부터 다시 시도
		isSlow = true;
		return p;
	}
	p->g = g;
	p->h = linearConflict(p);
	p->f = p->g + hFactor * hamming(p) + mulFactor * p->h; //p->h에 가중치가 많아질수록 속도는 빨라지지만, 이동횟수가 많아진다.
	if (p->f > threshold) {
		return p;
	}
	if (p->h == 0) return p;
	puzzle * solP = (puzzle*)malloc(sizeof(puzzle));
	copy(p, solP);
	sol[solIdx++] = solP;
	cList * list = initList();
	puzzle * temp = (puzzle*)malloc(sizeof(puzzle));
	for (int i = 0; i < 4; i++) {
		temp = getNeighbor(p, i);
		if (temp == NULL) continue;
		if (!inSolution(sol, temp)) {
			list->list_p[list->listSize++] = temp;
		}
		else free(temp);
	}

	puzzle* temp_2 = (puzzle*)malloc(sizeof(puzzle));
	int tmp = 99999999;
	while (list->listSize) {
		temp_2 = search(getList(list), g + 1, threshold);
		if (isSlow) {
			while (list->listSize) free(list->list_p[--list->listSize]);
			break;
		}
		if (temp_2->h == 0) {
			while (list->listSize) free(list->list_p[--list->listSize]);
			free(list);
			return temp_2;
		}
		if (temp_2->f > threshold) {
			tmp = min(tmp, temp_2->f);
		}
		free(temp_2);
	}
	if (isSlow) {
		free(list);
		free(temp_2);
		free(solP);
		return p;
	}
	if (tmp != 99999999) lb = tmp;
	if (solIdx > 0) {
		free(solP);
		solIdx--;
	}
	free(list);
	return p;
}

int getBlank(char* p) {
	for (int i = 0; i < MAX_SIZE; i++) {
		if (p[i] == MAX_SIZE) return i;
	}
}

char path[1000];
int pathIdx;
void printSolution(puzzle * sol[], puzzle * tmp) {
	int i;
	sol[solIdx++] = tmp;
	for (i = 0; i < solIdx - 1; i++) {
		int val = getBlank(sol[i + 1]->arr) - getBlank(sol[i]->arr);
		switch (val) {
		case -5:
			path[pathIdx++] = 'U';
			break;
		case -1:
			path[pathIdx++] = 'L';
			break;
		case 1:
			path[pathIdx++] = 'R';
			break;
		case 5:
			path[pathIdx++] = 'D';
			break;
		}
	}
	if (solIdx > 300) {
		puzzleSolutionStandard();
		if (solIdx > solIdx_2) {
			printSolutionStandard();
			for (i = 0; i < solIdx; i++) {
				free(sol[i]);
			}
			return;
		}
	}
	cout << "#" << num + 1 << " " << pathIdx << " ";
	for (i = 0; i < pathIdx; i++) {
		cout << path[i] << " ";
	}

	for (i = 0; i < solIdx; i++) {
		free(sol[i]);
	}
	cout << endl << endl;
}

void getSol(puzzle * p) {
	checkNum = 0;
	hFactor = 0;
	solIdx = 0;
	int threshold = linearConflict(p);
	if (threshold < 40) mulFactor = 1;
	else if (threshold < 110) mulFactor = 1.5;
	else if (threshold <= 200) {
		mulFactor = 2;
		if (threshold > 150) hFactor = 1;
	}
	else {
		mulFactor = 2.5;
		hFactor = 1;
	}
	puzzle* tmp = (puzzle*)malloc(sizeof(puzzle));
	while (true) {
		tmp = search(p, 0, threshold);
		if (isSlow) {
			if (mulFactor == 2.0 && hFactor == 0) hFactor = 1;
			else mulFactor += 0.5;
			if (mulFactor >= 2.5) {
				puzzleSolutionStandard();
				printSolutionStandard();
				free(p);
				free(tmp);
				return;
			}
			isSlow = false;
			checkNum = 0;
			solIdx = 0;
			continue;
		}
		if (tmp->f > threshold) {
			lb = tmp->f;
		}
		if (tmp->h == 0) {
			printSolution(sol, tmp);
			free(p);
			return;
		}
		threshold = lb;
	}
}


void print(puzzle * p) {
	if (p == NULL) return;
	for (int i = 0; i < MAX_SIZE; i++) {
		cout << (int)p->arr[i] << " ";
		if (i % 5 == 4) cout << endl;
	}
}

void puzzleSolution() {
	time_t start, end;
	cin >> t;
	puzzle* p[10];
	while (num < t) {
		p[num] = (puzzle*)malloc(sizeof(puzzle));
		init(p[num++]);
	}
	num = 0;
	while (num < t) {
		if (countInv(p[num]) % 2 == 1) {
			cout << "#" << ++num << " -1" << endl;
			continue;
		}
		getSol(p[num]);
		num++;
		solIdx = 0;
		pathIdx = 0;
		lb = 0;
	}
}

int main() {
	cout << "5X5 sliding puzzle ver 1.0" << endl;
	puzzleSolution();
}