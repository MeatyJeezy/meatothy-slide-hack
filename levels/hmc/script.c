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
		WARP_NODE(0x7A, LEVEL_BBH, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 12786, -6804, -8495, 0, 0, 0, 0x00000000, bhvBigBoulderGenerator),
		OBJECT(MODEL_NONE, 15396, -6783, -11518, 0, 0, 0, 0x00000000, bhvBigBoulderGenerator),
		OBJECT(MODEL_NONE, 12833, -6746, -14298, 0, 0, 0, 0x00000000, bhvBigBoulderGenerator),
		OBJECT(MODEL_NONE, 15384, -6794, -16994, 0, 0, 0, 0x00000000, bhvBigBoulderGenerator),
		OBJECT(MODEL_BOUNCE_SHROOM, -19740, 2, 18256, 0, 90, 0, 0x10400000, bhvBounceShroom),
		OBJECT(MODEL_BOUNCE_SHROOM, -18910, -1682, 17989, 0, 0, 0, 0x20620000, bhvBounceShroom),
		OBJECT(MODEL_BOUNCE_SHROOM, -5104, -1014, 18256, 0, 0, 0, 0x10380000, bhvBounceShroom),
		OBJECT(MODEL_BOUNCE_SHROOM, -2478, -1014, 18256, 0, 0, 0, 0x10380000, bhvBounceShroom),
		OBJECT(MODEL_BOUNCE_SHROOM, -88, -1177, 18256, -30, 0, 0, 0x10400000, bhvBounceShroom),
		OBJECT(MODEL_BOUNCE_SHROOM, -2879, -48, 16923, 32, 53, 0, 0x10450000, bhvBounceShroom),
		OBJECT(MODEL_BOUNCE_SHROOM, -2701, -919, 19031, 30, -180, 0, 0x10600000, bhvBounceShroom),
		OBJECT(MODEL_BOUNCE_SHROOM, -1775, 226, 17901, 44, 150, 0, 0x10650000, bhvBounceShroom),
		OBJECT(MODEL_BOUNCE_SHROOM, 13942, -7332, 6436, -20, 0, 0, 0x20650000, bhvBounceShroom),
		OBJECT(MODEL_BOUNCE_SHROOM, 12938, -7267, 3869, -4, -30, 0, 0x11850000, bhvBounceShroom),
		OBJECT(MODEL_BOUNCE_SHROOM, 1199, -3547, -12097, 19, 90, 0, 0x12500000, bhvBounceShroom),
		OBJECT(MODEL_BOUNCE_SHROOM, 2462, -2552, -12097, 51, -90, 0, 0x10580000, bhvBounceShroom),
		OBJECT(MODEL_BOUNCE_SHROOM, -24601, -3993, 4816, 0, 90, 0, 0x15500000, bhvBounceShroom),
		OBJECT(MODEL_BOUNCE_SHROOM, -27135, -3939, 4816, 0, 90, 0, 0x15500000, bhvBounceShroom),
		OBJECT(MODEL_BOUNCE_SHROOM, -29443, -6435, 31024, 0, -38, 0, 0x08600000, bhvBounceShroom),
		OBJECT(MODEL_BOUNCE_SHROOM, 13674, -5950, -19180, -1, 0, 0, 0x08700000, bhvBounceShroom),
		OBJECT(MODEL_BOUNCE_SHROOM, 14293, -3547, -19843, 10, 45, 0, 0x0A660000, bhvBounceShroom),
		OBJECT(MODEL_BOUNCE_SHROOM, 14868, -1734, -18786, 10, -15, 0, 0x0A700000, bhvBounceShroom),
		OBJECT(MODEL_BREAKABLE_BOX, 944, -3369, -2853, 0, 0, 0, 0x0A000000, bhvBreakableBox),
		OBJECT(MODEL_BREAKABLE_BOX, 944, -3391, -3114, 0, 0, 0, 0x0A000000, bhvBreakableBox),
		OBJECT(MODEL_BREAKABLE_BOX, 944, -3412, -3356, 0, 0, 0, 0x0A000000, bhvBreakableBox),
		OBJECT(MODEL_BREAKABLE_BOX, 944, -3430, -3594, 0, 0, 0, 0x0A000000, bhvBreakableBox),
		OBJECT(MODEL_YELLOW_COIN, -27807, -3971, 19207, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -23356, -4054, 19207, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -28611, -5112, 25510, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -30998, -5141, 25723, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -31387, -4911, 28303, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -25223, -6103, 25613, 0, 135, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_LAUNCH_BARREL, 13910, -4769, -13770, -90, -180, 0, 0x00990000, bhvLaunchBarrel),
		OBJECT(MODEL_LAUNCH_BARREL, 13928, -690, -13949, -65, -28, 0, 0x00360000, bhvLaunchBarrel),
		OBJECT(MODEL_YELLOW_COIN, 7058, -437, -8293, 0, 0, 0, 0x000D0000, bhvWarp),
		OBJECT(MODEL_WOODEN_SIGNPOST, 7370, -437, -8567, 0, 90, 0, 0x00A60000, bhvMessagePanel),
		OBJECT(MODEL_NONE, -27579, 2047, 16323, 0, 0, 0, 0x00000000, bhvFallingLeaves),
		OBJECT(MODEL_NONE, -24630, 1132, 16619, 0, 0, 0, 0x00000000, bhvFallingLeaves),
		OBJECT(MODEL_NONE, -28797, 1495, 17234, 0, 0, 0, 0x00000000, bhvFallingLeaves),
		OBJECT(MODEL_NONE, -20964, 761, 17195, 0, 0, 0, 0x00000000, bhvFallingLeaves),
		OBJECT(MODEL_NONE, -20512, 1695, 17327, 0, 0, 0, 0x00000000, bhvFallingLeaves),
		OBJECT(MODEL_NONE, -13882, 1385, 17622, 0, 0, 0, 0x00000000, bhvFallingLeaves),
		OBJECT(MODEL_NONE, -12647, 210, 17335, 0, 0, 0, 0x00000000, bhvFallingLeaves),
		OBJECT(MODEL_NONE, -9758, 48, 17251, 0, 0, 0, 0x00000000, bhvFallingLeaves),
		OBJECT(MODEL_NONE, -909, 1058, 13129, 0, 0, 0, 0x00000000, bhvFallingLeaves),
		OBJECT(MODEL_NONE, -493, 808, 11343, 0, 0, 0, 0x00000000, bhvFallingLeaves),
		OBJECT(MODEL_NONE, -2070, 743, 8941, 0, 0, 0, 0x00000000, bhvFallingLeaves),
		OBJECT(MODEL_NONE, -1426, 560, 6044, 0, 0, 0, 0x00000000, bhvFallingLeaves),
		OBJECT(MODEL_NONE, -485, -1997, 3010, 0, 0, 0, 0x00000000, bhvFallingLeaves),
		OBJECT(MODEL_NONE, 58, -2420, -2377, 0, 0, 0, 0x00000000, bhvFallingLeaves),
		OBJECT(MODEL_NONE, -445, -1491, -503, 0, 0, 0, 0x00000000, bhvFallingLeaves),
		OBJECT(MODEL_NONE, -442, -2161, -4775, 0, 0, 0, 0x00000000, bhvFallingLeaves),
		OBJECT(MODEL_NONE, -1934, -596, -14230, 0, 0, 0, 0x00000000, bhvFallingLeaves),
		OBJECT(MODEL_NONE, -8385, -898, -14265, 0, 0, 0, 0x00000000, bhvFallingLeaves),
		OBJECT(MODEL_NONE, -13549, -874, -14113, 0, 0, 0, 0x00000000, bhvFallingLeaves),
		OBJECT(MODEL_NONE, -29788, -340, -5837, 0, 0, 0, 0x00000000, bhvFallingLeaves),
		OBJECT(MODEL_NONE, -13779, -1671, -8620, 0, 0, 0, 0x00000000, bhvFallingLeaves),
		OBJECT(MODEL_NONE, -5073, -1615, -7285, 0, 0, 0, 0x00000000, bhvFallingLeaves),
		OBJECT(MODEL_NONE, -9360, -1641, -9455, 0, 0, 0, 0x00000000, bhvFallingLeaves),
		OBJECT(MODEL_NONE, -24740, -5744, 29177, 0, 0, 0, 0x00300000, bhvSmallSnake),
		OBJECT(MODEL_NONE, -18049, -6575, 21555, 0, 0, 0, 0x00550000, bhvSmallSnake),
		OBJECT(MODEL_NONE, -11479, -7274, 15449, 0, 0, 0, 0x00600000, bhvSmallSnake),
		MARIO_POS(0x01, 0, -30843, -3, 18638),
		OBJECT(MODEL_LAUNCH_BARREL, -30302, 82, 17957, -70, 90, 0, 0x00450000, bhvLaunchBarrel),
		OBJECT(MODEL_LAUNCH_BARREL, 854, 611, 9676, -13, -157, 0, 0x00400000, bhvLaunchBarrel),
		OBJECT(MODEL_LAUNCH_BARREL, -2766, -8322, 2994, -29, 133, 0, 0x00600000, bhvLaunchBarrel),
		OBJECT(MODEL_LAUNCH_BARREL, -975, -7481, 1415, -65, 46, 0, 0x00700000, bhvLaunchBarrel),
		OBJECT(MODEL_LAUNCH_BARREL, -9523, -2017, -11983, 7, -39, 0, 0x00450000, bhvLaunchBarrel),
		OBJECT(MODEL_NONE, -30716, -2234, 29014, 0, -45, 0, 0x00000000, bhvBigBoulderGenerator),
		OBJECT(MODEL_NONE, -15149, -4918, 11880, 45, -24, 4, 0x00000000, bhvBigBoulderGenerator),
		OBJECT(MODEL_ROLLING_SLIDE, -27014, -4055, 15487, 0, -89, 0, 0x00000000, bhvCustomRollingLog),
		OBJECT(MODEL_ROLLING_SLIDE, -26574, -4678, 21711, 0, -134, 0, 0x00000000, bhvCustomRollingLog),
		OBJECT(MODEL_ROLLING_SLIDE, -24623, -4085, 15457, 0, -89, 0, 0x00000000, bhvCustomRollingLog),
		OBJECT(MODEL_ROLLING_SLIDE, -9346, -8393, 8951, 0, 46, 0, 0x00000000, bhvCustomRollingLog),
		OBJECT(MODEL_ROLLING_SLIDE, -7298, -8925, 8855, 0, 46, 0, 0x00000000, bhvCustomRollingLog),
		OBJECT(MODEL_STAR, 8075, 59, -8280, 0, 0, 0, 0x01000000, bhvStar),
		OBJECT(MODEL_YELLOW_COIN, -30599, -222, 17666, 0, 90, 0, 0x000C0000, bhvWarp),
		OBJECT(MODEL_NONE, -30843, -3, 18542, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		OBJECT(MODEL_WATER_WHEEL, -17844, -2638, -8281, 0, 0, 0, 0x00000000, bhvWaterWheel),
		TERRAIN(hmc_area_1_collision),
		MACRO_OBJECTS(hmc_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_SNOW),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, -30843, -3, 18638),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
