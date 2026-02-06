#include "robot_simulator.h"

robot_status_t robot_create(robot_direction_t direction, int x, int y)
{
    robot_position_t position = {x, y};
    robot_status_t robot = {direction, position};
    return robot;
}

void robot_move(robot_status_t *robot, const char *commands)
{
    robot_position_t pos = {0, 0};

    if (robot->direction & 1) {pos.x = 1; pos.y = 0;}
    else {pos.x = 0; pos.y = 1;}
    if (robot->direction & 2) {pos.x = -pos.x; pos.y = -pos.y;}
    
    for (int i = 0; commands[i] != '\0'; i++)
    {
        switch (commands[i])
        {
            case 'A':
                robot->position.x += pos.x;
                robot->position.y += pos.y;
                break;
            case 'R':
                if (robot->direction != DIRECTION_MAX - 1)
                {
                    robot->direction++;
                }
                else {robot->direction = DIRECTION_DEFAULT;}
                if (robot->direction & 1) {pos.x = 1; pos.y = 0;}
                else {pos.x = 0; pos.y = 1;}
                if (robot->direction & 2) {pos.x = -pos.x; pos.y = -pos.y;}
                break;
            case 'L':
                if (robot->direction != DIRECTION_DEFAULT)
                {
                    robot->direction--;
                }
                else {robot->direction = DIRECTION_MAX - 1;}
                if (robot->direction & 1) {pos.x = 1; pos.y = 0;}
                else {pos.x = 0; pos.y = 1;}
                if (robot->direction & 2) {pos.x = -pos.x; pos.y = -pos.y;}
                break;
        }
    }
}
