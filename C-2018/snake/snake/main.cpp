#include "graphics.h"
#include "windows.h"
#include "const.h"
#include "map.h"

void start_game(int level); // 开始游戏，指定关卡
void draw_map(int level); // 绘制指定关卡的地图（围墙，障碍物）
void draw_food(); //　随机画食物，并保证食物只出现在空白区
void init_snake(); // 初始化蛇，并把初始化的蛇绘制出来
void draw_snake(); // 绘制蛇身
void move_snake(); // 控制蛇的移动
void copy_map(int a[TOTAL_CELL][3]); // 地图拷贝

void clear_last_node(); // 清除蛇身的最后一个节点
void copy_nodes(); // 把蛇前面的节点信息复制到后一个节点上，如第二个节点保存蛇头的信息，第三个节点保存第二个节点的信息
void head_node(); // 根据蛇身的方向重新指定蛇头的信息

void check_food();
int check_collision(); // 碰撞检测，包含食物的检测和死亡检测

Point get_point(int row, int col); // 通过行与列获取坐标信息

int current_level = 1; // 当前关卡，默认从第1关开始
int current_map[TOTAL_CELL][3]; // 当前关卡的地图信息

Snake snake; // 蛇

Food food; // 食物

int game_running = 1; // 游戏是否在运行中,1表示正在运行，0表示结束运行

unsigned long difficulty = 200; // 蛇运行的速度值，值越小，蛇的速度越大

Point get_point(int row, int col)
{
    Point p;
    p.x1 = col * SIZE;
    p.y1 = row * SIZE + Y_START;
    p.x2 = col * SIZE + SIZE;
    p.y2 = row * SIZE + SIZE + Y_START;
    return p;
}

/**
    把指定的关卡地图复制到当前地图全局变量中
**/
void copy_map(int a[TOTAL_CELL][3])
{
    for (int i = 0; i < TOTAL_CELL; i++)
    {
        current_map[i][0] = a[i][0];
        current_map[i][1] = a[i][1];
        current_map[i][2] = a[i][2];
        if (a[i][2] == 0)
        {
            break;
        }
    }
}

void draw_map(int level)
{
    switch (level)
    {
        case 1: copy_map(level_one); break;
        case 2: copy_map(level_two); break;
        default: break;
    }
    for (int i = 0; i < TOTAL_CELL; i++)
    {
        int type = current_map[i][2];
        int row = current_map[i][0];
        int col = current_map[i][1];
        if (type == 0)
        {
            break;
        }
        Point point = get_point(row, col);
        switch (type)
        {
            case RECT_WALL: rectangle(point.x1, point.y1, point.x2, point.y2); break;
            case RECT_BARRIER: bar(point.x1, point.y1, point.x2, point.y2); break;
            case CIRCLE_BARRIER: circle(point.x1 + SIZE / 2, point.y1 + SIZE / 2, SIZE / 2); break;
            default: break;
        }
    }
}

void draw_food()
{
    randomize();
    food.row = random(TOTAL_Y_CELL); // 不包括TOTAL_Y_CELL
    food.col = random(TOTAL_X_CELL);
    for (int i = 0; i < TOTAL_CELL; i++)
    {
        if (current_map[i][2] != 0)
        {
            while (food.row == current_map[i][0] && food.col == current_map[i][1])
            {
                // 如果食物的行与列与地图中出现的行与列一样，说明食物需要重新生成
                food.row = random(TOTAL_Y_CELL);
                food.col = random(TOTAL_X_CELL);
            }
        }
        else
        {
            break;
        }
    }
    Point point = get_point(food.row, food.col);
    setfillcolor(FOOD_COLOR);
    bar(point.x1, point.y1, point.x2, point.y2);
}

void init_snake()
{
    snake.life = SNAKE_LIFE;
    snake.nodes[0].row = SNAKE_INIT_ROW;
    snake.nodes[0].col = SNAKE_INIT_COL;
    snake.nodes[1].row = SNAKE_INIT_ROW;
    snake.nodes[1].col = SNAKE_INIT_COL - 1;
    snake.nodes[2].row = SNAKE_INIT_ROW;
    snake.nodes[2].col = SNAKE_INIT_COL - 2;
    snake.length = SNAKE_LENGTH;
    snake.direction = KEY_RIGHT;
    snake.score = 0;
    draw_snake();
}

void draw_snake()
{
    for (int i = 0; i < snake.length; i++)
    {
        Point point = get_point(snake.nodes[i].row, snake.nodes[i].col);
        setfillcolor(0x0000FF);
        bar3d(point.x1, point.y1, point.x2, point.y2, 0, false);
    }
}

void move_snake()
{
    while(game_running)
    {
        if (kbhit())
        {
            char ch = getch();
            switch (ch)
            {
                case KEY_UP: snake.direction = KEY_UP; break;
                case KEY_LEFT: snake.direction = KEY_LEFT; break;
                case KEY_DOWN: snake.direction = KEY_DOWN; break;
                case KEY_RIGHT: snake.direction = KEY_RIGHT; break;
                default:break;
            }
        }
        Sleep(difficulty); // 让蛇移动的时候有一定的延迟时间
        clear_last_node(); // 清除蛇身最后一个节点
        copy_nodes(); // 拷贝蛇身节点，前一个节点复制到后一个节点
        head_node(); // 单独处理头节点
        draw_snake(); // 重新画蛇出来
        check_food();
        if (check_collision()) // 进行碰撞检测，如果返回值为1，表示碰撞了，则生命值减1，重头开始此关卡
        {
            game_running = 0;
            Sleep(3000);
            cleardevice();
            if (snake.life > 0)
            {
                start_game(current_level); // 重新开始此关卡
            }
        }
    }
}

void clear_last_node()
{
    setfillcolor(GRAPHICS_BG_COLOR);
    Point point = get_point(snake.nodes[snake.length - 1].row, snake.nodes[snake.length - 1].col);
    bar(point.x1, point.y1, point.x2, point.y2);
}

void copy_nodes()
{
    for (int i = snake.length - 1; i > 0; i--)
    {
        snake.nodes[i].row = snake.nodes[i - 1].row;
        snake.nodes[i].col = snake.nodes[i - 1].col;
    }
}

void head_node()
{
    if (snake.direction == KEY_RIGHT)
    {
        snake.nodes[0].col += 1;
    }
    else if (snake.direction == KEY_UP)
    {
        snake.nodes[0].row -= 1;
    }
    else if (snake.direction == KEY_LEFT)
    {
        snake.nodes[0].col -= 1;
    }
    else if (snake.direction == KEY_DOWN)
    {
        snake.nodes[0].row += 1;
    }
}

void check_food()
{
    // 蛇头的行与列与食物的行与列一致，则吃到了食物
    if (snake.nodes[0].row == food.row && snake.nodes[0].col == food.col)
    {
        snake.length++; // 蛇身长度加1，不需要清除最后一个节点
        copy_nodes();
        head_node();
        draw_snake(); // 重新绘制蛇
        draw_food(); // 重新绘制新食物
    }
}

int check_collision()
{
    // 蛇头与地图中的每一个格子进行判断
    for (int i = 0; i < TOTAL_CELL; i++)
    {
        if (snake.nodes[0].row == current_map[i][0] && snake.nodes[0].col == current_map[i][1])
        {
            snake.life--;
            return 1;
        }
    }
    return 0;
}

void start_game(int level)
{
    draw_map(level);
    draw_food();
    init_snake();
    game_running = 1;
    move_snake();
}

int main()
{
    initgraph(WIDTH, HEIGHT);
    setbkcolor(GRAPHICS_BG_COLOR);
    start_game(current_level);
    getch();
    closegraph();
    return 0;
}
