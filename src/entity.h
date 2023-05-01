
typedef struct Entity
{
    u32 id;
    u8 type;
    u8 num_components;
    u32 component_mask;
} Entity;

Entity entity_create(u32 id, u8 type, u8 num_components, u8 component_mask)
{
    Entity entity = (Entity) {
        id,
        type,
        num_components,
        component_mask
    };

    return entity;
}

i8 entity_has_component(Entity *entity, u32 component_id)
{
    return 0;
}
