#include "src/game/envfx_snow.h"

const GeoLayout bounce_shroom_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, bounce_shroom_mushroombounce_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
