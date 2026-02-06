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
    
    switch (robot->direction)
    {
        case DIRECTION_NORTH:
            pos.y = 1;
            break;
        case DIRECTION_EAST:
            pos.x = 1;
            break;
        case DIRECTION_SOUTH:
            pos.y = -1;
            break;
        case DIRECTION_WEST:
            pos.x = -1;
            break;
        case DIRECTION_MAX:
            break;
    }  
    for (int i = 0; commands[i] != '\0'; i++)
    {
        switch (commands[i])
        {
            case 'A':
                robot->position.x += pos.x;
                robot->position.y += pos.y;
                break;
            case 'R':
                robot->direction = change_direction(robot->direction, 1, &pos);
                break;
            case 'L':
                robot->direction = change_direction(robot->direction, 0, &pos);
                break;
        }
    }
}

robot_direction_t change_direction(robot_direction_t dir, char command, robot_position_t* position)
{
    robot_direction_t direction;
    if (command)
    {
        switch (dir)
        {
            case DIRECTION_NORTH:
                direction = DIRECTION_EAST;
                position->x = 1;
                position->y = 0;
                break;
            case DIRECTION_EAST:
                direction = DIRECTION_SOUTH;
                position->x = 0;
                position->y = -1;
                break;
            case DIRECTION_SOUTH:
                direction = DIRECTION_WEST;
                position->x = -1;
                position->y = 0;
                break;
            case DIRECTION_WEST:
                direction = DIRECTION_NORTH;
                position->x = 0;
                position->y = 1;
                break;
            case DIRECTION_MAX:
                break;
        }
    }
    else
    {
        switch (dir)
        {
            case DIRECTION_NORTH:
                direction = DIRECTION_WEST;
                position->x = -1;
                position->y = 0;
                break;
            case DIRECTION_EAST:
                direction = DIRECTION_NORTH;
                position->x = 0;
                position->y = 1;
                break;
            case DIRECTION_SOUTH:
                direction = DIRECTION_EAST;
                position->x = 1;
                position->y = 0;
                break;
            case DIRECTION_WEST:
                direction = DIRECTION_SOUTH;
                position->x = 0;
                position->y = -1;
                break;
            case DIRECTION_MAX:
                break;
        }
    }
    return direction;
}