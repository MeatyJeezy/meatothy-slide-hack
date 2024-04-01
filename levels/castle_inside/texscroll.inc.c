void scroll_gfx_mat_castle_inside_dl_f3dlite_material() {
	Gfx *mat = segmented_to_virtual(mat_castle_inside_dl_f3dlite_material);

	shift_t(mat, 11, PACK_TILESIZE(0, 1));

};

void scroll_castle_inside() {
	scroll_gfx_mat_castle_inside_dl_f3dlite_material();
};
