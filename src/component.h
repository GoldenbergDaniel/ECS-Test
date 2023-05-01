
// ID: 001
typedef struct C_Translation
{
    f32 speed;
    v2 position;
    v2 velocity;
} C_Translation;

// ID: 010
typedef struct C_Acceleration
{
    f32 mass;
    v2 acceleration;
} C_Acceleration;

// ID: 100
typedef struct C_Display
{
    f32 scale;
    Color color;
} C_Display;
