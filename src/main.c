#include "globals.h"

#include "game.h"

i32 main(void)
{
    SetConfigFlags(FLAG_VSYNC_HINT | FLAG_WINDOW_HIGHDPI);
    SetTargetFPS(60);

    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, WINDOW_TITLE);

    State state = (State) {true};
    game_init(&state);

    while (!WindowShouldClose())
    {
        game_update(&state);

        BeginDrawing();
        game_draw(&state);
        EndDrawing();
    }

    state.is_running = false;

    CloseWindow();

    return 0;
}
