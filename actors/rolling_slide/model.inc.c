
Vtx rolling_slide_Cube_003_mesh_layer_1_vtx_0[24] = {
	{{ {2166, -413, 893}, 0, {368, 1008}, {0, 0, 127, 255} }},
	{{ {2181, -214, 893}, 0, {624, 1008}, {0, 0, 127, 255} }},
	{{ {-2166, 413, 893}, 0, {624, 752}, {0, 0, 127, 255} }},
	{{ {-2181, 214, 893}, 0, {368, 752}, {0, 0, 127, 255} }},
	{{ {-2181, 214, 893}, 0, {368, 752}, {129, 10, 0, 255} }},
	{{ {-2166, 413, 893}, 0, {624, 752}, {129, 10, 0, 255} }},
	{{ {-2166, 413, -893}, 0, {624, 496}, {129, 10, 0, 255} }},
	{{ {-2181, 214, -893}, 0, {368, 496}, {129, 10, 0, 255} }},
	{{ {-2181, 214, -893}, 0, {368, 496}, {0, 0, 129, 255} }},
	{{ {-2166, 413, -893}, 0, {624, 496}, {0, 0, 129, 255} }},
	{{ {2181, -214, -893}, 0, {624, 240}, {0, 0, 129, 255} }},
	{{ {2166, -413, -893}, 0, {368, 240}, {0, 0, 129, 255} }},
	{{ {2166, -413, -893}, 0, {368, 240}, {127, 246, 0, 255} }},
	{{ {2181, -214, -893}, 0, {624, 240}, {127, 246, 0, 255} }},
	{{ {2181, -214, 893}, 0, {624, -16}, {127, 246, 0, 255} }},
	{{ {2166, -413, 893}, 0, {368, -16}, {127, 246, 0, 255} }},
	{{ {-2181, 214, 893}, 0, {112, 496}, {238, 130, 0, 255} }},
	{{ {-2181, 214, -893}, 0, {368, 496}, {238, 130, 0, 255} }},
	{{ {2166, -413, -893}, 0, {368, 240}, {238, 130, 0, 255} }},
	{{ {2166, -413, 893}, 0, {112, 240}, {238, 130, 0, 255} }},
	{{ {-2166, 413, -893}, 0, {624, 496}, {18, 126, 0, 255} }},
	{{ {-2166, 413, 893}, 0, {880, 496}, {18, 126, 0, 255} }},
	{{ {2181, -214, 893}, 0, {880, 240}, {18, 126, 0, 255} }},
	{{ {2181, -214, -893}, 0, {624, 240}, {18, 126, 0, 255} }},
};

Gfx rolling_slide_Cube_003_mesh_layer_1_tri_0[] = {
	gsSPVertex(rolling_slide_Cube_003_mesh_layer_1_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(rolling_slide_Cube_003_mesh_layer_1_vtx_0 + 16, 8, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSPEndDisplayList(),
};


Gfx mat_rolling_slide_f3dlite_material_003[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
    gsSPLightColor(LIGHT_1, 0xff9600ff),
    gsSPLightColor(LIGHT_2, 0x7f4800ff),
	gsSPEndDisplayList(),
};

Gfx rolling_slide_Cube_003_mesh_layer_1[] = {
	gsSPDisplayList(mat_rolling_slide_f3dlite_material_003),
	gsSPDisplayList(rolling_slide_Cube_003_mesh_layer_1_tri_0),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

