#include "robot_simulator.h"

const robot_position_t table[] =
{
    [DIRECTION_NORTH] = {0, 1},
    [DIRECTION_EAST] = {1, 0},
    [DIRECTION_SOUTH] = {0, -1},
    [DIRECTION_WEST] = {-1, 0},
};

robot_status_t robot_create(robot_direction_t direction, int x, int y)
{
    if (direction < 0 || direction >= DIRECTION_MAX) {direction = DIRECTION_DEFAULT;}
    return (robot_status_t){direction, {x, y}};
}

void robot_move(robot_status_t *robot, const char *commands)
{
    if (!robot || !commands) {return;}
    
    for (int i = 0; commands[i] != '\0'; i++)
    {
        switch (commands[i])
        {
            case ADVANCE:
                
                robot->position.x += table[robot->direction].x;
                robot->position.y += table[robot->direction].y;
                break;
                
            case TURN_RIGHT:
                
                robot->direction = (robot->direction + 1) % DIRECTION_MAX;
                // 0 + 1 = 1 % 4 = 1
                // 1 + 1 = 2 % 4 = 2
                // 2 + 1 = 3 % 4 = 3
                // 3 + 1 = 4 % 4 = 0
                break;
                
            case TURN_LEFT:
                
                robot->direction = (robot->direction + DIRECTION_MAX - 1) % DIRECTION_MAX;
                // 0 + 3 = 3 % 4 = 3
                // 1 + 3 = 4 % 4 = 0
                // 2 + 3 = 5 % 4 = 1
                // 3 + 3 = 6 % 4 = 2
                break;
        }
    }
}
