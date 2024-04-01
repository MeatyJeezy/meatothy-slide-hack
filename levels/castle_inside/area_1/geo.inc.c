#include "src/game/envfx_snow.h"

const GeoLayout castle_inside_area_1_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -11793, -312, 1007, castle_inside_dl_Circle_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_inside_dl_Cube_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_ALPHA, castle_inside_dl_Cube_mesh_layer_4),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 0, 0, 25, castle_inside_dl_Cube_001_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -11914, 888, 1556, 90, 0, 0, castle_inside_dl_Cylinder_mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, 11914, -1460, 888, -90, 0, 0, castle_inside_dl_greenery_pack_004_mesh_layer_4),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_inside_dl_Cylinder_001_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_ALPHA, castle_inside_dl_greenery_pack_001_mesh_layer_4),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_TRANSPARENT, -6446, -2807, 0, castle_inside_dl_deathplane_mesh_layer_5),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -15562, 2922, 0, 0, -94, 90, castle_inside_dl_Fappy_001_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_TRANSPARENT, -12410, 907, 1572, castle_inside_dl_level1warp_mesh_layer_5),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_TRANSPARENT, -12410, 907, -1628, castle_inside_dl_level2warp_mesh_layer_5),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_inside_dl_Roofs_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout castle_inside_area_1[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(0),
		GEO_OPEN_NODE(),
			GEO_NODE_ORTHO(100.0000),
			GEO_OPEN_NODE(),
				GEO_BACKGROUND(BACKGROUND_ABOVE_CLOUDS, geo_skybox_main),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 100, 30000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, 0, 0, 0, 0, -100, 0, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, castle_inside_area_1_geo),
					
						GEO_OPEN_NODE(),
							GEO_ASM(  0, geo_painting_update),
							GEO_ASM(PAINTING_ID(7, 1), geo_painting_draw),
							GEO_ASM(PAINTING_ID(6, 1), geo_painting_draw),
						GEO_CLOSE_NODE(),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_MODE_NONE, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
