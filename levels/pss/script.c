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
		OBJECT(MODEL_BOUNCE_SHROOM, -20079, 7936, 18256, 15, 90, 0, 0x10400000, bhvBounceShroom),
		OBJECT(MODEL_BOUNCE_SHROOM, -19757, 6616, 18256, 0, 0, 0, 0x20500000, bhvBounceShroom),
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
		MARIO_POS(0x01, 0, -30843, 7931, 18638),
		OBJECT(MODEL_LAUNCH_BARREL, -30302, 8016, 19091, 0, -180, 0, 0x00400000, bhvLaunchBarrel),
		OBJECT(MODEL_LAUNCH_BARREL, -30302, 8016, 17797, -70, 90, 0, 0x00450000, bhvLaunchBarrel),
		OBJECT(MODEL_LAUNCH_BARREL, -30302, 8016, 16318, 0, 90, 0, 0x00400000, bhvLaunchBarrel),
		OBJECT(MODEL_LAUNCH_BARREL, -751, 8578, 12320, 0, -180, 0, 0x00400000, bhvLaunchBarrel),
		OBJECT(MODEL_NONE, -30843, 7931, 18542, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
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
