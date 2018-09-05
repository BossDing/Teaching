// 画面的宽度
#define WIDTH 600
// 画面的高度
#define HEIGHT 600
// 从哪个位置开始游戏界面
#define Y_START 100
// 格子的大小
#define SIZE 10

// 总格子数
#define TOTAL_CELL WIDTH / SIZE * (HEIGHT - Y_START) / SIZE

// x方向上的格子数
#define TOTAL_X_CELL WIDTH / SIZE
// y方向上的格子数
#define TOTAL_Y_CELL (HEIGHT - Y_START) /SIZE

// 围墙
#define RECT_WALL 1
// 方形障碍物
#define RECT_BARRIER 2
// 圆形障碍物
#define CIRCLE_BARRIER 3

// 向左
#define KEY_LEFT 37
// 向上
#define KEY_UP 38
// 向右
#define KEY_RIGHT 39
// 向下
#define KEY_DOWN 40

// 蛇身最多多少个节点
#define SNAKE_MAX_NODE 200
// 蛇身的初始生命
#define SNAKE_LIFE 3
// 蛇身的初始节点数
#define SNAKE_LENGTH 3

// 蛇头的初始行
#define SNAKE_INIT_ROW 5
// 蛇头的初始列
#define SNAKE_INIT_COL 5

// 背景颜色
#define GRAPHICS_BG_COLOR 0xFFFFFF
// 食物颜色
#define FOOD_COLOR 0xFF0000

// 定义的包含有矩形的两个点的坐标
struct Point
{
    int x1; // 起始点x
    int y1; // 起始点y
    int x2; // 终点x
    int y2; // 终点y
};

// 定义食物
struct Food
{
    int row; // 食物出现的行
    int col; // 食物出现的列
};

// 蛇身节点
struct Snake_node
{
    int row; // 蛇身节点的行
    int col; // 蛇身节点的列
};

// 定义蛇
struct Snake
{
    int life; // 蛇的生命值
    Snake_node nodes[SNAKE_MAX_NODE]; // 蛇的所有节点
    int length; // 蛇身的长度
    int direction; // 蛇身的运动方向
    int score; // 蛇的得分
};
