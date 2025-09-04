
// ???????????
struct character {
	short animationFrameWidth;					 // ????????????
	short animationFrameHeight;					 // ????????????

	double positionX;							 // ??????x?????????????	?????	
	double positionY;							 // ??????y?????????????	?????

	short animationFrameX;						 // ????????????????
	short animationFrameMaxX;
	short animationFrameMinX;
	short animationFrameY;						 // ????????????????
	short animationFrameMaxY;
	short animationFrameMinY;

	double accelerationCoefficient;				 // ???????
	double reverseAccelerationCoefficient;		 //	?????????
	double turningSpeedCoefficient;				 // ????????
	double autoHoverCoefficient;				 // ?????????

	double inertiaX;							 // ?????
	double inertiaY;							 // ?????

	short maxHitPoint;							 // ??????
	short remainingHitPoint;					 // ??????
	bool isDie;
}

// ???????????
hero,
spirit[spiritEnemyHave];

// ???????????
void initializeHero() {
	hero.animationFrameWidth = 180;
	hero.animationFrameHeight = 180;

	hero.positionX = graphicWindowWidth * 0.5 - hero.animationFrameWidth * 0.5;
	hero.positionY = graphicWindowHeight - hero.animationFrameHeight;

	hero.animationFrameX = 5;
	hero.animationFrameMaxX = 10;
	hero.animationFrameMinX = 0;
	hero.animationFrameY = 3;
	hero.animationFrameMaxY = 6;
	hero.animationFrameMinY = 0;

	hero.accelerationCoefficient = 0.48;
	hero.reverseAccelerationCoefficient = 0.28;
	hero.turningSpeedCoefficient = 0.38;
	hero.autoHoverCoefficient = 0.7;

	hero.inertiaX = 0;
	hero.inertiaY = 0;

	hero.maxHitPoint = 10000;
	hero.remainingHitPoint = 10000;
	hero.isDie = false;
}

void initializeSpirit() {
	spirit[spiritSpawned].animationFrameWidth = 180;
	spirit[spiritSpawned].animationFrameHeight = 104;

	spirit[spiritSpawned].positionX = getRandomIntegerInRange(0, graphicWindowWidth - spirit[spiritSpawned].animationFrameWidth);
	spirit[spiritSpawned].positionY = getRandomIntegerInRange(-3 * spirit[spiritSpawned].animationFrameHeight, 0);

	spirit[spiritSpawned].animationFrameX = 0;
	spirit[spiritSpawned].animationFrameMaxX = 0;
	spirit[spiritSpawned].animationFrameMinX = 0;
	spirit[spiritSpawned].animationFrameY = 0;
	spirit[spiritSpawned].animationFrameMaxY = 4;
	spirit[spiritSpawned].animationFrameMinY = 0;

	spirit[spiritSpawned].accelerationCoefficient = 0.35;
	spirit[spiritSpawned].reverseAccelerationCoefficient = 0.28;
	spirit[spiritSpawned].turningSpeedCoefficient = 0.21;
	spirit[spiritSpawned].autoHoverCoefficient = 0.7;

	spirit[spiritSpawned].inertiaX = 0;
	spirit[spiritSpawned].inertiaY = getRandomIntegerInRange(1, 6);

	spirit[spiritSpawned].maxHitPoint = 1000;
	spirit[spiritSpawned].remainingHitPoint = 1000;
	spirit[spiritSpawned].isDie = false;

	++spiritSpawned;
	++spiritRemained;
}