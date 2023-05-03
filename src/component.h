// ID: 0000000 (0)
typedef struct C_Display
{
    f32 scale;
    Color color;
} C_Display;

// ID: 00000001 (1)
typedef struct C_Translation
{
    f32 speed;
    v2 position;
    v2 velocity;
} C_Translation;

// ID: 00000010 (2)
typedef struct C_Acceleration
{
    f32 mass;
    v2 acceleration;
} C_Acceleration;
