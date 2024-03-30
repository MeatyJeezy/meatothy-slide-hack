
Vtx bbh_dl_Plane_mesh_layer_1_vtx_cull[8] = {
	{{ {-535, -318, 357}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-535, 978, 357}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-535, 978, -1056}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-535, -318, -1056}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {535, -318, 357}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {535, 978, 357}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {535, 978, -1056}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {535, -318, -1056}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx bbh_dl_Plane_mesh_layer_1_vtx_0[16] = {
	{{ {0, -318, 357}, 0, {496, 1008}, {187, 107, 0, 255} }},
	{{ {535, 26, 13}, 0, {1008, 1008}, {187, 107, 0, 255} }},
	{{ {535, 26, -1056}, 0, {1008, -16}, {187, 107, 0, 255} }},
	{{ {0, -318, -713}, 0, {496, -16}, {187, 107, 0, 255} }},
	{{ {0, -318, 357}, 0, {496, 1008}, {69, 0, 149, 255} }},
	{{ {-535, 26, 13}, 0, {-16, 1008}, {69, 0, 149, 255} }},
	{{ {-535, 978, 13}, 0, {-16, 1008}, {69, 0, 149, 255} }},
	{{ {0, 635, 357}, 0, {496, 1008}, {69, 0, 149, 255} }},
	{{ {535, 26, 13}, 0, {1008, 1008}, {187, 0, 149, 255} }},
	{{ {0, -318, 357}, 0, {496, 1008}, {187, 0, 149, 255} }},
	{{ {0, 635, 357}, 0, {496, 1008}, {187, 0, 149, 255} }},
	{{ {535, 978, 13}, 0, {1008, 1008}, {187, 0, 149, 255} }},
	{{ {-535, 26, 13}, 0, {-16, 1008}, {69, 107, 0, 255} }},
	{{ {0, -318, 357}, 0, {496, 1008}, {69, 107, 0, 255} }},
	{{ {0, -318, -713}, 0, {496, -16}, {69, 107, 0, 255} }},
	{{ {-535, 26, -1056}, 0, {-16, -16}, {69, 107, 0, 255} }},
};

Gfx bbh_dl_Plane_mesh_layer_1_tri_0[] = {
	gsSPVertex(bbh_dl_Plane_mesh_layer_1_vtx_0 + 0, 16, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
	gsSPEndDisplayList(),
};

Gfx mat_bbh_dl_f3dlite_material[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
    gsSPLightColor(LIGHT_1, 0xff00eeff),
    gsSPLightColor(LIGHT_2, 0x7f0077ff),
	gsSPEndDisplayList(),
};

Gfx bbh_dl_Plane_mesh_layer_1[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(bbh_dl_Plane_mesh_layer_1_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_bbh_dl_f3dlite_material),
	gsSPDisplayList(bbh_dl_Plane_mesh_layer_1_tri_0),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

