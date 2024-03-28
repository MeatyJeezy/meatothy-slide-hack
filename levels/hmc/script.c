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
#include "levels/hmc/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_hmc_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _hmc_segment_7SegmentRomStart, _hmc_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _cave_yay0SegmentRomStart, _cave_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group6_yay0SegmentRomStart, _group6_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group6_geoSegmentRomStart, _group6_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group17_yay0SegmentRomStart, _group17_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group17_geoSegmentRomStart, _group17_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_YAY0(0xa, _water_skybox_yay0SegmentRomStart, _water_skybox_yay0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_7), 
	JUMP_LINK(script_func_global_18), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_WOODEN_DOOR, wooden_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_METAL_DOOR, metal_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_HAZY_MAZE_DOOR, hazy_maze_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_METAL_PLATFORM, hmc_geo_0005A0), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_METAL_ARROW_PLATFORM, hmc_geo_0005B8), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_ELEVATOR_PLATFORM, hmc_geo_0005D0), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_ROLLING_ROCK, hmc_geo_000548), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_ROCK_PIECE, hmc_geo_000570), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_ROCK_SMALL_PIECE, hmc_geo_000588), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_RED_GRILLS, hmc_geo_000530), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, hmc_area_1),
		WARP_NODE(0x0A, LEVEL_PSS, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_PSS, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_PSS, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_PSS, 0x01, 0x0B, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_LAUNCH_BARREL, 22440, 8355, 26, 18, -97, -16, 0x00350000, bhvLaunchBarrel),
		OBJECT(MODEL_LAUNCH_BARREL, -27193, 1957, 2319, -5, 172, 0, 0x00450000, bhvLaunchBarrel),
		OBJECT(MODEL_LAUNCH_BARREL, 9591, 3959, -1211, -33, 36, 0, 0x00650000, bhvLaunchBarrel),
		OBJECT(MODEL_LAUNCH_BARREL, 10600, 4757, 222, -91, 41, 2, 0x00800000, bhvLaunchBarrel),
		OBJECT(MODEL_LAUNCH_BARREL, 10746, 8505, 255, -27, 59, 0, 0x008F0000, bhvLaunchBarrel),
		OBJECT(MODEL_LAUNCH_BARREL, 23959, 8796, 11208, -5, -108, 30, 0x004E0000, bhvLaunchBarrel),
		OBJECT(MODEL_LAUNCH_BARREL, 17497, 5643, 9092, -21, -34, -7, 0x008F0000, bhvLaunchBarrel),
		OBJECT(MODEL_LAUNCH_BARREL, 12915, 6563, 21109, 11, -148, 1, 0x009F0000, bhvLaunchBarrel),
		OBJECT(MODEL_LAUNCH_BARREL, 7666, 3366, 5932, -49, -107, 7, 0x00950000, bhvLaunchBarrel),
		OBJECT(MODEL_LAUNCH_BARREL, 14921, 6563, 12955, -12, -14, -1, 0x009F0000, bhvLaunchBarrel),
		OBJECT(MODEL_LAUNCH_BARREL, -353, 6563, 13329, 90, 0, 0, 0x00AF0000, bhvLaunchBarrel),
		OBJECT(MODEL_LAUNCH_BARREL, 747, 7172, 3791, 4, -54, 12, 0x003F0000, bhvLaunchBarrel),
		OBJECT(MODEL_LAUNCH_BARREL, -373, -130, 13353, -55, -138, -3, 0x009F0000, bhvLaunchBarrel),
		OBJECT(MODEL_LAUNCH_BARREL, -3802, 4091, 9421, -74, 28, 2, 0x00CF0000, bhvLaunchBarrel),
		OBJECT(MODEL_LAUNCH_BARREL, -2585, 11703, 11581, 0, 128, -3, 0x005F0000, bhvLaunchBarrel),
		OBJECT(MODEL_LAUNCH_BARREL, -2585, 9980, 11581, -90, 124, -3, 0x009F0000, bhvLaunchBarrel),
		OBJECT(MODEL_LAUNCH_BARREL, 28498, 9741, 26, -81, -97, 0, 0x00450000, bhvLaunchBarrel),
		OBJECT(MODEL_LAUNCH_BARREL, -23812, -7554, -14618, -66, 90, 0, 0x00FF0000, bhvLaunchBarrel),
		OBJECT(MODEL_LAUNCH_BARREL, -18055, 1306, -14621, -67, 90, 0, 0x008F0000, bhvLaunchBarrel),
		OBJECT(MODEL_BOUNCE_SHROOM, 10983, 2586, -1834, 1, -67, 0, 0x10450000, bhvBounceShroom),
		OBJECT(MODEL_BOUNCE_SHROOM, 14939, 4484, 17498, 0, 0, 0, 0x10600000, bhvBounceShroom),
		OBJECT(MODEL_BOUNCE_SHROOM, 9614, 1476, -1217, 0, 0, 0, 0x086F0000, bhvBounceShroom),
		OBJECT(MODEL_BOUNCE_SHROOM, 12356, 5523, 20674, -43, 38, 0, 0x1F300000, bhvBounceShroom),
		OBJECT(MODEL_BOUNCE_SHROOM, 27738, 6496, 7748, 23, -46, 0, 0x10400000, bhvBounceShroom),
		MARIO_POS(0x01, 0, 29267, 10119, -22),
		OBJECT(MODEL_YELLOW_COIN, 29753, 9596, 110, 0, 0, 0, 0x000B0000, bhvWarpPipe),
		OBJECT(MODEL_NONE, 29267, 9831, -22, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		TERRAIN(hmc_area_1_collision),
		MACRO_OBJECTS(hmc_area_1_macro_objs),
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
