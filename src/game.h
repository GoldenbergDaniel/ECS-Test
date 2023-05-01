
typedef struct State
{
    bool is_running;
} State;

void game_init(State *state);
void game_handle_input(State *state);
void game_update(State *state);
void game_draw(State *state);
void game_deint(State *state);
