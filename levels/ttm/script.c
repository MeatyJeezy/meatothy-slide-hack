#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

/* Fast64 begin persistent block [includes] */
/* Fast64 end persistent block [includes] */

#include "make_const_nonconst.h"
#include "levels/ttm/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_ttm_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _ttm_segment_7SegmentRomStart, _ttm_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _mountain_yay0SegmentRomStart, _mountain_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _bidw_skybox_yay0SegmentRomStart, _bidw_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group6_yay0SegmentRomStart, _group6_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group6_geoSegmentRomStart, _group6_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_7), 
	LOAD_MODEL_FROM_GEO(MODEL_TTM_SLIDE_EXIT_PODIUM, ttm_geo_000DF4), 
	LOAD_MODEL_FROM_GEO(MODEL_TTM_ROLLING_LOG, ttm_geo_000730), 
	LOAD_MODEL_FROM_GEO(MODEL_TTM_STAR_CAGE, ttm_geo_000710), 
	LOAD_MODEL_FROM_GEO(MODEL_TTM_BLUE_SMILEY, ttm_geo_000D14), 
	LOAD_MODEL_FROM_GEO(MODEL_TTM_YELLOW_SMILEY, ttm_geo_000D4C), 
	LOAD_MODEL_FROM_GEO(MODEL_TTM_STAR_SMILEY, ttm_geo_000D84), 
	LOAD_MODEL_FROM_GEO(MODEL_TTM_MOON_SMILEY, ttm_geo_000DBC), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, ttm_geo_000748), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04, ttm_geo_000778), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05, ttm_geo_0007A8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06, ttm_geo_0007D8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07, ttm_geo_000808), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08, ttm_geo_000830), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_09, ttm_geo_000858), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A, ttm_geo_000880), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0B, ttm_geo_0008A8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C, ttm_geo_0008D0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0D, ttm_geo_0008F8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0F, ttm_geo_000920), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_10, ttm_geo_000948), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_11, ttm_geo_000970), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_12, ttm_geo_000990), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_13, ttm_geo_0009C0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_14, ttm_geo_0009F0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_15, ttm_geo_000A18), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_16, ttm_geo_000A40), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, ttm_area_1),
		WARP_NODE(0x0A, LEVEL_TTM, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE, 0x01, 0x20, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE, 0x01, 0x20, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_CASTLE, 0x01, 0x20, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0E, LEVEL_CASTLE, 0x01, 0x20, WARP_NO_CHECKPOINT),
		WARP_NODE(0x7A, LEVEL_BBH, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF3, LEVEL_CASTLE, 0x01, 0x20, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_LAUNCH_BARREL, 22440, 8355, 26, 18, -97, -16, 0x00350000, bhvLaunchBarrel),
		OBJECT(MODEL_LAUNCH_BARREL, -27193, 1957, 2319, -5, 172, 0, 0x00450000, bhvLaunchBarrel),
		OBJECT(MODEL_LAUNCH_BARREL, 9591, 3959, -1211, -33, 43, 0, 0x00650000, bhvLaunchBarrel),
		OBJECT(MODEL_LAUNCH_BARREL, 10720, 4757, 150, -90, 64, 0, 0x00850000, bhvLaunchBarrel),
		OBJECT(MODEL_LAUNCH_BARREL, 10839, 8813, 232, -37, 59, 0, 0x007F0000, bhvLaunchBarrel),
		OBJECT(MODEL_LAUNCH_BARREL, 23959, 8796, 11208, -5, -108, 30, 0x004E0000, bhvLaunchBarrel),
		OBJECT(MODEL_LAUNCH_BARREL, 17497, 5643, 9092, -34, -34, 0, 0x00650000, bhvLaunchBarrel),
		OBJECT(MODEL_LAUNCH_BARREL, 12915, 6563, 21109, 10, -148, 0, 0x007F0000, bhvLaunchBarrel),
		OBJECT(MODEL_LAUNCH_BARREL, 7666, 3366, 5932, -60, -107, 0, 0x00710000, bhvLaunchBarrel),
		OBJECT(MODEL_LAUNCH_BARREL, 14921, 6563, 12955, -31, -14, 0, 0x00750000, bhvLaunchBarrel),
		OBJECT(MODEL_LAUNCH_BARREL, -268, 6015, 13140, 95, 139, 0, 0x00AF0000, bhvLaunchBarrel),
		OBJECT(MODEL_LAUNCH_BARREL, 747, 7172, 3791, 4, -54, 12, 0x003F0000, bhvLaunchBarrel),
		OBJECT(MODEL_LAUNCH_BARREL, -399, -100, 13325, -55, -126, 0, 0x00820000, bhvLaunchBarrel),
		OBJECT(MODEL_LAUNCH_BARREL, -2474, 6457, 11541, -89, 124, 0, 0x008F0000, bhvLaunchBarrel),
		OBJECT(MODEL_LAUNCH_BARREL, -2314, 11703, 11401, 0, 128, -3, 0x004F0000, bhvLaunchBarrel),
		OBJECT(MODEL_LAUNCH_BARREL, -2630, 2575, 11616, -89, 124, 0, 0x007F0000, bhvLaunchBarrel),
		OBJECT(MODEL_LAUNCH_BARREL, 5119, 6153, 5160, -39, -107, 0, 0x00610000, bhvLaunchBarrel),
		OBJECT(MODEL_LAUNCH_BARREL, 28498, 9741, 26, -81, -97, 0, 0x00450000, bhvLaunchBarrel),
		OBJECT(MODEL_LAUNCH_BARREL, -23812, -7554, -14618, -66, 90, 0, 0x00FF0000, bhvLaunchBarrel),
		OBJECT(MODEL_LAUNCH_BARREL, -18055, 1306, -14621, -67, 90, 0, 0x008F0000, bhvLaunchBarrel),
		OBJECT(MODEL_BOUNCE_SHROOM, 10983, 2586, -1834, 1, -67, 0, 0x10450000, bhvBounceShroom),
		OBJECT(MODEL_BOUNCE_SHROOM, 14939, 4484, 17498, 0, 0, 0, 0x10600000, bhvBounceShroom),
		OBJECT(MODEL_BOUNCE_SHROOM, 9614, 1476, -1217, 0, 0, 0, 0x086F0000, bhvBounceShroom),
		OBJECT(MODEL_BOUNCE_SHROOM, 12356, 5523, 20674, -43, 38, 0, 0x1F300000, bhvBounceShroom),
		OBJECT(MODEL_NONE, -10275, 5521, -14781, 0, 0, 0, 0x000E0000, bhvWarp),
		MARIO_POS(0x01, 0, 29267, 10119, -22),
		OBJECT(MODEL_NONE, 29753, 9596, 110, 0, -90, 0, 0x000B0000, bhvWarp),
		OBJECT(MODEL_STAR, -11520, 6071, -14817, 0, 0, 0, 0x01000000, bhvStar),
		OBJECT(MODEL_NONE, 29267, 9831, -22, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		TERRAIN(ttm_area_1_collision),
		MACRO_OBJECTS(ttm_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_HOT),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, 29267, 10119, -22),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
