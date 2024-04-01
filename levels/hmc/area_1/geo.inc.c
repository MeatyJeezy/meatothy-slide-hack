#include "src/game/envfx_snow.h"

const GeoLayout hmc_area_1_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_ALPHA, 12884, -7085, -8444, hmc_dl_boulderaccelplane_mesh_layer_4),
		GEO_DISPLAY_LIST(LAYER_ALPHA, hmc_dl_boulderaccelplane_001_mesh_layer_4),
		GEO_DISPLAY_LIST(LAYER_ALPHA, hmc_dl_boulderaccelplane_002_mesh_layer_4),
		GEO_DISPLAY_LIST(LAYER_ALPHA, hmc_dl_boulderaccelplane_003_mesh_layer_4),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, hmc_dl_caveramp_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_ALPHA, hmc_dl_caveslope_001_mesh_layer_4),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, hmc_dl_caveslope_001_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, hmc_dl_caveslope_003_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_ALPHA, hmc_dl_caveslope_003_mesh_layer_4),
		GEO_TRANSLATE_NODE(LAYER_OPAQUE, -25243, -3967, 19217),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_TRANSPARENT, 6757, -1711, -8272, hmc_dl_Cube_001_mesh_layer_5),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 8187, -862, -8272, hmc_dl_Cube_004_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, hmc_dl_Cylinder_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 0, -7934, 0, hmc_dl_Cylinder_001_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, hmc_dl_Cylinder_002_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -26, -10795, 59, hmc_dl_darkplane_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_TRANSPARENT, -26, -10889, 59, hmc_dl_deathplane_mesh_layer_5),
		GEO_DISPLAY_LIST(LAYER_ALPHA, hmc_dl_failmushroomfloor_mesh_layer_4),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, hmc_dl_failmushroomfloor_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, hmc_dl_FallenTrees_mesh_layer_1),
		GEO_TRANSLATE_NODE(LAYER_OPAQUE, -23645, 1368, 17339),
		GEO_DISPLAY_LIST(LAYER_ALPHA, hmc_dl_greenery_pack_001_mesh_layer_4),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_ALPHA, 0, -83, 0, hmc_dl_greenery_pack_005_mesh_layer_4),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_TRANSPARENT, 7030, -434, -8266, hmc_dl_paintingwarpfloor_mesh_layer_5),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, hmc_dl_Pillars_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_ALPHA, hmc_dl_PlantA_mesh_layer_4),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, hmc_dl_ramp_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, hmc_dl_ramp_002_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, hmc_dl_ramp_004_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_ALPHA, hmc_dl_rollingrockplane_mesh_layer_4),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 6176, -3619, -8280, hmc_dl_secretwaterfallthingy_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, hmc_dl_slantedcave_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, hmc_dl_slantedcave_001_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, hmc_dl_slantedcave_002_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, hmc_dl_slantedcave_003_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, hmc_dl_slantedcave_004_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, hmc_dl_slantedcave_005_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, hmc_dl_slantedcave_006_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, hmc_dl_slantedcavefailsafe_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, hmc_dl_slide1_001_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_ALPHA, hmc_dl_slide1_001_mesh_layer_4),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 14025, -5465, -5372, hmc_dl_slide1_006_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 14025, -5467, -7430, hmc_dl_slide1_007_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_ALPHA, hmc_dl_slide1_008_mesh_layer_4),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, hmc_dl_slide1_008_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, hmc_dl_slide1_013_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_ALPHA, hmc_dl_slide1_013_mesh_layer_4),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, hmc_dl_slide2_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, hmc_dl_slide2_004_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, hmc_dl_slide2_005_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, hmc_dl_slide2_008_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, hmc_dl_slide2_009_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, hmc_dl_slide2_010_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_ALPHA, hmc_dl_slide2_011_mesh_layer_4),
		GEO_DISPLAY_LIST(LAYER_ALPHA, hmc_dl_slide2_012_mesh_layer_4),
		GEO_DISPLAY_LIST(LAYER_ALPHA, hmc_dl_slide2_013_mesh_layer_4),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_TRANSPARENT, -29726, 621, 18158, hmc_dl_Startline_mesh_layer_5),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, hmc_dl_startslide_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, hmc_dl_stoneshore_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, hmc_dl_underwaterslope_001_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, hmc_dl_underwaterslope_002_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_ALPHA, hmc_dl_wallkickrocks_mesh_layer_4),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, hmc_dl_Water_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, hmc_dl_Water_001_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, hmc_dl_Water_002_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_ALPHA, hmc_dl_Water_002_mesh_layer_4),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout hmc_area_1[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(0),
		GEO_OPEN_NODE(),
			GEO_NODE_ORTHO(100.0000),
			GEO_OPEN_NODE(),
				GEO_BACKGROUND(BACKGROUND_BELOW_CLOUDS, geo_skybox_main),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 100, 30000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, 0, 0, 0, 0, -100, 0, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, hmc_area_1_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_MODE_NONE, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
