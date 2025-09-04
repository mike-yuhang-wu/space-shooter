
void warheadBallistics() {

	for (short ammunitionNumber = 0; ammunitionNumber < heroHeatFired; ammunitionNumber++) {
		if (heat[ammunitionNumber].isHit == false) {
			drawImageAsRGBA(&HEAT_Warhead, heat[ammunitionNumber].positionX, heat[ammunitionNumber].positionY);

			heat[ammunitionNumber].positionX += heat[ammunitionNumber].inertiaX;
			heat[ammunitionNumber].positionY += heat[ammunitionNumber].inertiaY;

			if (heat[ammunitionNumber].positionY < -heat[ammunitionNumber].animationFrameHeight) {
				heat[ammunitionNumber].isHit = true;
			}

			for (short spiritNumber = 0; spiritNumber < spiritSpawned; spiritNumber++) {
				if (spirit[spiritNumber].isDie == false && spirit[spiritNumber].positionX < heat[ammunitionNumber].positionX && heat[ammunitionNumber].positionX < spirit[spiritNumber].positionX + spirit[spiritNumber].animationFrameWidth && spirit[spiritNumber].positionY < heat[ammunitionNumber].positionY && heat[ammunitionNumber].positionY < spirit[spiritNumber].positionY + spirit[spiritNumber].animationFrameHeight) {
					heat[ammunitionNumber].isHit = true;
					spirit[spiritNumber].remainingHitPoint -= heat[ammunitionNumber].damage;

					break;
				}
			}
		}
	}

	for (short ammunitionNumber = 0; ammunitionNumber < heroHeatFired; ammunitionNumber++) {
		if (heatCartridge[ammunitionNumber].isHit == false) {
			drawImageAsRGBA(&HEAT_Cartridge, heatCartridge[ammunitionNumber].positionX, heatCartridge[ammunitionNumber].positionY);

			heatCartridge[ammunitionNumber].positionX += heatCartridge[ammunitionNumber].inertiaX;
			heatCartridge[ammunitionNumber].positionY += heatCartridge[ammunitionNumber].inertiaY;

			if (heatCartridge[ammunitionNumber].positionY < -heatCartridge[ammunitionNumber].animationFrameHeight) {
				heatCartridge[ammunitionNumber].isHit = true;
			}

			for (short spiritNumber = 0; spiritNumber < spiritSpawned; spiritNumber++) {
				if (spirit[spiritNumber].isDie == false && spirit[spiritNumber].positionX < heatCartridge[ammunitionNumber].positionX && heatCartridge[ammunitionNumber].positionX < spirit[spiritNumber].positionX + spirit[spiritNumber].animationFrameWidth && spirit[spiritNumber].positionY < heatCartridge[ammunitionNumber].positionY && heatCartridge[ammunitionNumber].positionY < spirit[spiritNumber].positionY + spirit[spiritNumber].animationFrameHeight) {
					heatCartridge[ammunitionNumber].isHit = true;
					spirit[spiritNumber].remainingHitPoint -= heatCartridge[ammunitionNumber].damage;

					break;
				}
			}
		}
	}
}

void weaponFire() {
	if (currentWeaponSlot == 0) {
		if (heroHeatFired < maximumAmmunationLoad_heat) {
			initializeHeatCartridge();
			initializeHeat();
			hero.inertiaY -= 0.25;
			hero.inertiaX -= 0.15 * heroHeatMuzzleDisplacement * getRandomIntegerInRange(1, 3);
			heroHeatFired++;

			heroHeatMuzzleDisplacement += 2;
			if (heroHeatMuzzleDisplacement > 1) {
				heroHeatMuzzleDisplacement = -1;
			}
		}
	}

	else if (currentWeaponSlot == 1) {

	}

	else if (currentWeaponSlot == 2) {

	}

	else {
		
	}
}

void drawAndPilotHero() {
	// ?????????????
	if (GetAsyncKeyState('W')) {
		if (hero.animationFrameY < hero.animationFrameMaxY) {
			hero.animationFrameY += 1;
		}

		else {
			hero.animationFrameY = hero.animationFrameMaxY;
		}

		hero.inertiaY += (hero.animationFrameY - 3) * hero.accelerationCoefficient;
	}

	if (GetAsyncKeyState('S')) {
		if (hero.animationFrameY > hero.animationFrameMinY) {
			hero.animationFrameY -= 1;
		}

		else {
			hero.animationFrameY = hero.animationFrameMinY;
		}

		hero.inertiaY += (hero.animationFrameY - 3) * hero.reverseAccelerationCoefficient;
	}

	if (GetAsyncKeyState('A')) {
		if (hero.animationFrameX > hero.animationFrameMinX) {
			hero.animationFrameX -= 1;
		}

		else {
			hero.animationFrameX = hero.animationFrameMinX;
		}

		hero.inertiaX += (hero.animationFrameX - 5) * hero.turningSpeedCoefficient;
	}

	if (GetAsyncKeyState('D')) {
		if (hero.animationFrameX < hero.animationFrameMaxX) {
			hero.animationFrameX += 1;
		}

		else {
			hero.animationFrameX = hero.animationFrameMaxX;
		}

		hero.inertiaX += (hero.animationFrameX - 5) * hero.turningSpeedCoefficient;
	}

	// ???????????????
	if (GetAsyncKeyState('R')) {
		hero.inertiaX = hero.inertiaX * hero.autoHoverCoefficient;
		hero.inertiaY = hero.inertiaY * hero.autoHoverCoefficient;
	}

	// ??????????????????????????????????????????????????????????????????????????????
	if (hero.positionX + hero.inertiaX <= -25 or hero.positionX + hero.inertiaX >= graphicWindowWidth - hero.animationFrameWidth + 25) {
		hero.inertiaX = 0;
	}

	else {
		hero.positionX += hero.inertiaX;
	}

	if (hero.positionY - hero.inertiaY <= 0 or hero.positionY - hero.inertiaY >= graphicWindowHeight - hero.animationFrameHeight + 55) {
		hero.inertiaY = 0;
	}

	else {
		hero.positionY -= hero.inertiaY;
	}

	// ??????????????????
	if (GetAsyncKeyState(VK_NUMPAD1) or GetAsyncKeyState('1')) {
		currentWeaponSlot = 0;
	}

	if (GetAsyncKeyState(VK_NUMPAD2) or GetAsyncKeyState('2')) {
		currentWeaponSlot = 1;
	}

	if (GetAsyncKeyState(VK_NUMPAD3) or GetAsyncKeyState('3')) {
		currentWeaponSlot = 2;
	}

	if (GetAsyncKeyState(VK_NUMPAD4) or GetAsyncKeyState('4')) {
		currentWeaponSlot = 3;
	}

	// ?????????????
	if (GetAsyncKeyState(VK_NUMPAD0)) {
		weaponFire();
	}

	// ???????????????????????
	if (GetAsyncKeyState('A') == 0 and GetAsyncKeyState('D') == 0) {
		if (hero.animationFrameX > 5) {
			hero.animationFrameX -= 1;
		}

		if (hero.animationFrameX < 5) {
			hero.animationFrameX += 1;
		}
	}

	if (GetAsyncKeyState('W') == 0 and GetAsyncKeyState('S') == 0) {
		if (hero.animationFrameY > 3) {
			hero.animationFrameY -= 1;
		}

		if (hero.animationFrameY < 3) {
			hero.animationFrameY += 1;
		}
	}
	
	// ?????????????
	drawImageAsRGBA(&legendaryHeroFighterJet[hero.animationFrameY][hero.animationFrameX][0][0], hero.positionX, hero.positionY);
}

void killSpirit(short spiritNumber) {
	spirit[spiritNumber].isDie = true;
	spiritRemained--;
}

void drawAndMoveSpirit() {

	if (spiritRemained < spiritSpawnWhenLessExist) {
		for (short spiritNumber = spiritRemained; spiritNumber < numberOfSpiritToSpawn; spiritNumber++) {
			initializeSpirit();
		}
	}

	for (short spiritNumber = 0; spiritNumber < spiritSpawned; spiritNumber++) {
		if (spirit[spiritNumber].positionY > graphicWindowHeight || spirit[spiritNumber].positionY < -graphicWindowHeight || spirit[spiritNumber].positionX < 0 || spirit[spiritNumber].positionX > graphicWindowWidth) {
			spirit[spiritNumber].remainingHitPoint = 0;
		}
		
		if (spirit[spiritNumber].isDie == false && spirit[spiritNumber].remainingHitPoint <= 0) {
			killSpirit(spiritNumber);
		}

		if (spirit[spiritNumber].isDie == false) {
			drawImageAsRGBA(&spiritStealthJet[0], spirit[spiritNumber].positionX, spirit[spiritNumber].positionY);
			spirit[spiritNumber].positionX += spirit[spiritNumber].inertiaX;
			spirit[spiritNumber].positionY += spirit[spiritNumber].inertiaY;
		}
	}
}
