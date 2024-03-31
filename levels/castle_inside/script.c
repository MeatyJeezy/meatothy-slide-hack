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
#include "levels/castle_inside/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_castle_inside_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _castle_inside_segment_7SegmentRomStart, _castle_inside_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _inside_yay0SegmentRomStart, _inside_yay0SegmentRomEnd), 
	LOAD_YAY0(0x06, _group15_yay0SegmentRomStart, _group15_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group15_geoSegmentRomStart, _group15_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_16), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_BOWSER_TRAP, castle_geo_000F18), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WATER_LEVEL_PILLAR, castle_geo_001940), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CLOCK_MINUTE_HAND, castle_geo_001530), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CLOCK_HOUR_HAND, castle_geo_001548), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CLOCK_PENDULUM, castle_geo_001518), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CASTLE_DOOR, castle_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WOODEN_DOOR, wooden_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_METAL_DOOR, metal_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CASTLE_DOOR_UNUSED, castle_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WOODEN_DOOR_UNUSED, wooden_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_0_STARS, castle_door_0_star_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_1_STAR, castle_door_1_star_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_3_STARS, castle_door_3_stars_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_KEY_DOOR, key_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_30_STARS, castle_geo_000F00), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_8_STARS, castle_geo_000F00), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_50_STARS, castle_geo_000F00), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_70_STARS, castle_geo_000F00), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, castle_inside_area_1),
		WARP_NODE(0x0A, LEVEL_CASTLE, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_PSS, 0x01, 0x0B, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0C, LEVEL_HMC, 0x01, 0x0C, WARP_NO_CHECKPOINT),
		WARP_NODE(0x20, LEVEL_CASTLE, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_LAUNCH_BARREL, 698, 1146, 52, -65, -90, 0, 0x00450000, bhvLaunchBarrel),
		OBJECT(MODEL_BOUNCE_SHROOM, 704, 130, 49, 0, 0, 0, 0x08550000, bhvBounceShroom),
		OBJECT(MODEL_BOUNCE_SHROOM, -8256, -485, 49, -1, 90, 0, 0x18550000, bhvBounceShroom),
		OBJECT(MODEL_YELLOW_COIN, -678, 2191, 732, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -702, 2180, -747, 0, 0, 0, 0x00000000, bhvYellowCoin),
		MARIO_POS(0x01, 0, 1142, 200, 0),
		OBJECT(MODEL_NONE, -15345, 2375, 18, 0, 90, 0, 0x009E0000, bhvSignOnWall),
		OBJECT(MODEL_NONE, -10726, 2806, 52, 0, -90, 0, 0x00200000, bhvSpinAirborneWarp),
		OBJECT(MODEL_NONE, 1206, 552, 0, 0, -90, 0, 0x000A0000, bhvSpinAirborneWarp),
		TERRAIN(castle_inside_area_1_collision),
		MACRO_OBJECTS(castle_inside_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_WATER),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, 1142, 200, 0),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
