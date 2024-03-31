void scroll_hmc_dl_Water_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 32;
	int width = 32 * 0x20;
	int height = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	static int currentY = 0;
	int deltaY;
	static int timeY;
	float amplitudeY = 0.7600000500679016;
	float frequencyY = 0.0700000524520874;
	float offsetY = 0.29999998211860657;
	Vtx *vertices = segmented_to_virtual(hmc_dl_Water_mesh_layer_1_vtx_0);

	deltaX = (int)(0.34000009298324585 * 0x20) % width;
	deltaY = (int)(amplitudeY * frequencyY * coss((frequencyY * timeY + offsetY) * (1024 * 16 - 1) / 6.28318530718) * 0x20);

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}
	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
		vertices[i].n.tc[1] += deltaY;
	}
	currentX += deltaX;	currentY += deltaY;	timeY += 1;
}

void scroll_hmc_dl_Water_001_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 37;
	int width = 32 * 0x20;
	int height = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	static int currentY = 0;
	int deltaY;
	static int timeY;
	float amplitudeY = 0.7600000500679016;
	float frequencyY = 0.0700000524520874;
	float offsetY = 0.29999998211860657;
	Vtx *vertices = segmented_to_virtual(hmc_dl_Water_001_mesh_layer_1_vtx_0);

	deltaX = (int)(0.34000009298324585 * 0x20) % width;
	deltaY = (int)(amplitudeY * frequencyY * coss((frequencyY * timeY + offsetY) * (1024 * 16 - 1) / 6.28318530718) * 0x20);

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}
	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
		vertices[i].n.tc[1] += deltaY;
	}
	currentX += deltaX;	currentY += deltaY;	timeY += 1;
}

void scroll_hmc_dl_Water_002_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 16;
	int width = 32 * 0x20;
	int height = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	static int currentY = 0;
	int deltaY;
	static int timeY;
	float amplitudeY = 0.7600000500679016;
	float frequencyY = 0.0700000524520874;
	float offsetY = 0.29999998211860657;
	Vtx *vertices = segmented_to_virtual(hmc_dl_Water_002_mesh_layer_1_vtx_0);

	deltaX = (int)(0.34000009298324585 * 0x20) % width;
	deltaY = (int)(amplitudeY * frequencyY * coss((frequencyY * timeY + offsetY) * (1024 * 16 - 1) / 6.28318530718) * 0x20);

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}
	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
		vertices[i].n.tc[1] += deltaY;
	}
	currentX += deltaX;	currentY += deltaY;	timeY += 1;
}

void scroll_hmc() {
	scroll_hmc_dl_Water_mesh_layer_1_vtx_0();
	scroll_hmc_dl_Water_001_mesh_layer_1_vtx_0();
	scroll_hmc_dl_Water_002_mesh_layer_1_vtx_0();
};
