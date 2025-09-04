#include "import.h"

int main() {
	loadImageToPointers();

	initializeHero();

	drawGraphicWindow();
	drawStarrySky(110);
	getAndSaveBackground();

	BeginBatchDraw();
	while (true) {
		redrawBackground();
		drawAndPilotHero();
		drawAndMoveSpirit();
		warheadBallistics();

		FlushBatchDraw();
	}
	EndBatchDraw();

	return 0;
}