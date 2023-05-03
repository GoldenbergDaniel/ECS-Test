#include "globals.h"

#include "entity.h"

Entity entity_create(u32 id, u8 type, u8 num_components, u8 component_mask)
{
    return (Entity) {
        id,
        type,
        num_components,
        component_mask
    };
}
