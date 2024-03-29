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
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_HMC, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_HMC, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0C, LEVEL_BOB, 0x01, 0x0C, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0D, LEVEL_BOB, 0x01, 0x0C, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 12786, 1130, -8495, 0, 0, 0, 0x00000000, bhvBigBoulderGenerator),
		OBJECT(MODEL_NONE, 15396, 1151, -11518, 0, 0, 0, 0x00000000, bhvBigBoulderGenerator),
		OBJECT(MODEL_NONE, 12833, 1188, -14298, 0, 0, 0, 0x00000000, bhvBigBoulderGenerator),
		OBJECT(MODEL_NONE, 15384, 1140, -16994, 0, 0, 0, 0x00000000, bhvBigBoulderGenerator),
		OBJECT(MODEL_BOUNCE_SHROOM, -19740, 7936, 18256, 0, 90, 0, 0x10400000, bhvBounceShroom),
		OBJECT(MODEL_BOUNCE_SHROOM, -18910, 6252, 17989, 0, 0, 0, 0x20620000, bhvBounceShroom),
		OBJECT(MODEL_BOUNCE_SHROOM, -5104, 6920, 18256, 0, 0, 0, 0x10380000, bhvBounceShroom),
		OBJECT(MODEL_BOUNCE_SHROOM, -2478, 6920, 18256, 0, 0, 0, 0x10380000, bhvBounceShroom),
		OBJECT(MODEL_BOUNCE_SHROOM, -88, 6757, 18256, -30, 0, 0, 0x10400000, bhvBounceShroom),
		OBJECT(MODEL_BOUNCE_SHROOM, -2879, 7886, 16923, 32, 53, 0, 0x10450000, bhvBounceShroom),
		OBJECT(MODEL_BOUNCE_SHROOM, -2701, 7015, 19031, 30, -180, 0, 0x10600000, bhvBounceShroom),
		OBJECT(MODEL_BOUNCE_SHROOM, -1775, 8160, 17901, 44, 150, 0, 0x10650000, bhvBounceShroom),
		OBJECT(MODEL_BOUNCE_SHROOM, 13942, 602, 6436, -20, 0, 0, 0x20650000, bhvBounceShroom),
		OBJECT(MODEL_BOUNCE_SHROOM, 12854, 602, 4014, -4, -30, 0, 0x20850000, bhvBounceShroom),
		OBJECT(MODEL_BOUNCE_SHROOM, 1199, 4387, -12097, 19, 90, 0, 0x12500000, bhvBounceShroom),
		OBJECT(MODEL_BOUNCE_SHROOM, 2462, 5382, -12097, 51, -90, 0, 0x10580000, bhvBounceShroom),
		OBJECT(MODEL_BOUNCE_SHROOM, -24601, 3941, 4816, 0, 90, 0, 0x12500000, bhvBounceShroom),
		OBJECT(MODEL_BOUNCE_SHROOM, -27135, 3995, 4816, 0, 90, 0, 0x12500000, bhvBounceShroom),
		OBJECT(MODEL_BOUNCE_SHROOM, -29443, 1563, 31024, 0, -38, 0, 0x07300000, bhvBounceShroom),
		OBJECT(MODEL_BOUNCE_SHROOM, 13674, 1984, -19180, -1, 0, 0, 0x08700000, bhvBounceShroom),
		OBJECT(MODEL_BOUNCE_SHROOM, 14293, 4387, -19843, 10, 45, 0, 0x0A660000, bhvBounceShroom),
		OBJECT(MODEL_BOUNCE_SHROOM, 14868, 6200, -18786, 10, -15, 0, 0x0A700000, bhvBounceShroom),
		OBJECT(MODEL_LAUNCH_BARREL, 13922, 3165, -13615, -90, -180, 0, 0x00990000, bhvLaunchBarrel),
		OBJECT(MODEL_LAUNCH_BARREL, 13928, 7244, -13949, -65, -28, 0, 0x00360000, bhvLaunchBarrel),
		OBJECT(MODEL_CASTLE_GROUNDS_WARP_PIPE, 7126, 7497, -8315, 0, 0, 0, 0x000D0000, bhvWarpPipe),
		OBJECT(MODEL_NONE, -24740, 2190, 29177, 0, 0, 0, 0x00300000, bhvSmallSnake),
		OBJECT(MODEL_NONE, -18049, 1359, 21555, 0, 0, 0, 0x00550000, bhvSmallSnake),
		OBJECT(MODEL_NONE, -11479, 660, 15449, 0, 0, 0, 0x00600000, bhvSmallSnake),
		MARIO_POS(0x01, 0, -30843, 7931, 18638),
		OBJECT(MODEL_LAUNCH_BARREL, -30302, 8061, 18122, -70, 90, 0, 0x00450000, bhvLaunchBarrel),
		OBJECT(MODEL_LAUNCH_BARREL, 854, 8545, 9676, -13, -157, 0, 0x00400000, bhvLaunchBarrel),
		OBJECT(MODEL_LAUNCH_BARREL, -2766, -388, 2994, -29, 133, 0, 0x00600000, bhvLaunchBarrel),
		OBJECT(MODEL_LAUNCH_BARREL, -975, 453, 1415, -65, 46, 0, 0x00700000, bhvLaunchBarrel),
		OBJECT(MODEL_LAUNCH_BARREL, -9523, 5917, -11983, 7, -39, 0, 0x00450000, bhvLaunchBarrel),
		OBJECT(MODEL_NONE, -30716, 5700, 29014, 0, -45, 0, 0x00000000, bhvBigBoulderGenerator),
		OBJECT(MODEL_NONE, -15149, 3016, 11880, 45, -24, 4, 0x00000000, bhvBigBoulderGenerator),
		OBJECT(MODEL_ROLLING_SLIDE, -27014, 3879, 15487, 0, -89, 0, 0x00000000, bhvCustomRollingLog),
		OBJECT(MODEL_ROLLING_SLIDE, -26574, 3256, 21711, 0, -134, 0, 0x00000000, bhvCustomRollingLog),
		OBJECT(MODEL_ROLLING_SLIDE, -24623, 3849, 15457, 0, -89, 0, 0x00000000, bhvCustomRollingLog),
		OBJECT(MODEL_ROLLING_SLIDE, -9346, -459, 8951, 0, 46, 0, 0x00000000, bhvCustomRollingLog),
		OBJECT(MODEL_ROLLING_SLIDE, -7298, -991, 8855, 0, 46, 0, 0x00000000, bhvCustomRollingLog),
		OBJECT(MODEL_STAR, 8070, 8036, -8236, 0, 0, 0, 0x01000000, bhvStar),
		OBJECT(MODEL_CASTLE_GROUNDS_WARP_PIPE, -30965, 7712, 18104, 0, 0, 0, 0x000C0000, bhvWarpPipe),
		OBJECT(MODEL_NONE, -30843, 7931, 18542, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		OBJECT(MODEL_WATER_WHEEL, -17844, 5296, -8281, 0, 0, 0, 0x00000000, bhvWaterWheel),
		TERRAIN(hmc_area_1_collision),
		MACRO_OBJECTS(hmc_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_SNOW),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, -30843, 7931, 18638),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
