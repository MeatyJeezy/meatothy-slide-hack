void scroll_gfx_mat_bob_dl_f3dlite_material() {
	Gfx *mat = segmented_to_virtual(mat_bob_dl_f3dlite_material);

	shift_s(mat, 11, PACK_TILESIZE(0, 1));

};

void scroll_bob() {
	scroll_gfx_mat_bob_dl_f3dlite_material();
};
