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
#include "levels/pss/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_pss_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _pss_segment_7SegmentRomStart, _pss_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _mountain_yay0SegmentRomStart, _mountain_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group8_yay0SegmentRomStart, _group8_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group8_geoSegmentRomStart, _group8_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_YAY0(0xa, _water_skybox_yay0SegmentRomStart, _water_skybox_yay0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_9), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, pss_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_PSS, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_PSS, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_LAUNCH_BARREL, 23176, -3471, 24171, 0, -170, 0, 0x00500000, bhvLaunchBarrel),
		OBJECT(MODEL_LAUNCH_BARREL, 22879, -3471, 24171, -49, 179, 0, 0x00500000, bhvLaunchBarrel),
		OBJECT(MODEL_LAUNCH_BARREL, 22879, -3471, 24709, -90, 0, 179, 0x00500000, bhvLaunchBarrel),
		OBJECT(MODEL_BOUNCE_SHROOM, -19863, 7936, 18256, 0, 90, 0, 0x10400000, bhvBounceShroom),
		OBJECT(MODEL_BOUNCE_SHROOM, -18910, 6252, 17989, 0, 0, 0, 0x20620000, bhvBounceShroom),
		OBJECT(MODEL_BOUNCE_SHROOM, -5104, 6920, 18256, 0, 0, 0, 0x10380000, bhvBounceShroom),
		OBJECT(MODEL_BOUNCE_SHROOM, -2478, 6920, 18256, 0, 0, 0, 0x10380000, bhvBounceShroom),
		OBJECT(MODEL_BOUNCE_SHROOM, -88, 6757, 18256, -30, 0, 0, 0x10400000, bhvBounceShroom),
		OBJECT(MODEL_BOUNCE_SHROOM, -2879, 7886, 16923, 32, 53, 0, 0x10450000, bhvBounceShroom),
		OBJECT(MODEL_BOUNCE_SHROOM, -2701, 7015, 19031, 30, -180, 0, 0x10600000, bhvBounceShroom),
		OBJECT(MODEL_BOUNCE_SHROOM, -1775, 8160, 17901, 44, 150, 0, 0x10650000, bhvBounceShroom),
		OBJECT(MODEL_BOUNCE_SHROOM, -30281, 7840, 20236, 45, 135, 0, 0x10500000, bhvBounceShroom),
		OBJECT(MODEL_BOUNCE_SHROOM, -30281, 7840, 19638, 45, 45, 0, 0x10500000, bhvBounceShroom),
		OBJECT(MODEL_BOUNCE_SHROOM, -30800, 7840, 19638, -45, -90, 0, 0x10500000, bhvBounceShroom),
		OBJECT(MODEL_BOUNCE_SHROOM, -30800, 7840, 20279, 30, -90, 0, 0x10500000, bhvBounceShroom),
		OBJECT(MODEL_BOUNCE_SHROOM, -30800, 7840, 21662, -45, 0, 0, 0x10500000, bhvBounceShroom),
		OBJECT(MODEL_BOUNCE_SHROOM, 1199, 4387, -12097, 19, 90, 0, 0x12500000, bhvBounceShroom),
		OBJECT(MODEL_BOUNCE_SHROOM, 2267, 5512, -12097, 51, -90, 0, 0x10500000, bhvBounceShroom),
		OBJECT(MODEL_BOUNCE_SHROOM, -24601, 3866, 4816, 0, 90, 0, 0x12500000, bhvBounceShroom),
		OBJECT(MODEL_BOUNCE_SHROOM, -27135, 3920, 4816, 0, 90, 0, 0x12500000, bhvBounceShroom),
		OBJECT(MODEL_BREAKABLE_BOX, 944, 4565, -2853, 0, 0, 0, 0x0A000000, bhvBreakableBox),
		OBJECT(MODEL_BREAKABLE_BOX, 944, 4543, -3114, 0, 0, 0, 0x0A000000, bhvBreakableBox),
		OBJECT(MODEL_BREAKABLE_BOX, 944, 4522, -3356, 0, 0, 0, 0x0A000000, bhvBreakableBox),
		OBJECT(MODEL_BREAKABLE_BOX, 944, 4504, -3594, 0, 0, 0, 0x0A000000, bhvBreakableBox),
		OBJECT(MODEL_NONE, -24740, 2190, 29177, 0, 0, 0, 0x00300000, bhvSmallSnake),
		OBJECT(MODEL_NONE, -18049, 1359, 21555, 0, 0, 0, 0x00550000, bhvSmallSnake),
		OBJECT(MODEL_NONE, -11479, 660, 15449, 0, 0, 0, 0x00600000, bhvSmallSnake),
		MARIO_POS(0x01, 0, -30843, 7931, 18638),
		OBJECT(MODEL_LAUNCH_BARREL, -30302, 8016, 19091, 0, -180, 0, 0x00400000, bhvLaunchBarrel),
		OBJECT(MODEL_LAUNCH_BARREL, -30302, 8016, 17797, -70, 90, 0, 0x00450000, bhvLaunchBarrel),
		OBJECT(MODEL_LAUNCH_BARREL, -30302, 8016, 16318, 0, 90, 0, 0x00400000, bhvLaunchBarrel),
		OBJECT(MODEL_LAUNCH_BARREL, 854, 8545, 9676, -13, -157, 0, 0x00400000, bhvLaunchBarrel),
		OBJECT(MODEL_LAUNCH_BARREL, -9523, 5917, -11983, 7, -39, 0, 0x00450000, bhvLaunchBarrel),
		OBJECT(MODEL_HMC_ROLLING_ROCK, -30442, 7712, 14721, 0, 0, 0, 0x00000000, bhvBigBoulder),
		OBJECT(MODEL_ROLLING_SLIDE, -26957, 3879, 15365, 0, -89, 0, 0x00000000, bhvCustomRollingLog),
		OBJECT(MODEL_ROLLING_SLIDE, -26308, 3256, 21268, 0, -134, 0, 0x00000000, bhvCustomRollingLog),
		OBJECT(MODEL_ROLLING_SLIDE, -24656, 3849, 15279, 0, -89, 0, 0x00000000, bhvCustomRollingLog),
		OBJECT(MODEL_NONE, -30843, 7931, 18542, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		OBJECT(MODEL_WATER_WHEEL, -17844, 5365, -8281, 0, 0, 0, 0x00000000, bhvWaterWheel),
		OBJECT(MODEL_WATER_WHEEL, -17844, 5078, 13713, 0, 0, 0, 0x00000000, bhvWaterWheel),
		TERRAIN(pss_area_1_collision),
		MACRO_OBJECTS(pss_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_GRASS),
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
