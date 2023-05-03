
typedef struct Entity
{
    u32 id;
    u8 type;
    u8 num_components;
    u32 component_mask;
} Entity;

Entity entity_create(u32 id, u8 type, u8 num_components, u8 component_mask);
